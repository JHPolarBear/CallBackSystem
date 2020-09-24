#include "Subject.h"

using namespace std;

Subject::~Subject()
{
	// Release all Unique ptr
	if(m_vecObserver.size())
	{
		std::vector<unique_ptr<Observer>>::iterator _iter = m_vecObserver.begin();

		while(_iter != m_vecObserver.end())
		{
			auto ptr = std::move(*_iter);
			ptr.release();

			m_vecObserver.erase(_iter);
		}
	}
}

void Subject::Register(unique_ptr<Observer> _observer)
{
	std::vector<unique_ptr<Observer>>::iterator _iter = std::find(m_vecObserver.begin(), m_vecObserver.end(), _observer);
	if(_iter == m_vecObserver.end())
	{
		m_vecObserver.push_back(move(_observer));
	}
	else
	{
		std::cout << "[Subject::Register] _observer already exists." << std::endl;
	}	
}

void Subject::Unregister(unique_ptr<Observer> _observer)
{
	std::vector<unique_ptr<Observer>>::iterator _iter = std::find(m_vecObserver.begin(), m_vecObserver.end(), _observer);
	if (_iter != m_vecObserver.end())
	{
		// move ownership of unregistering observer to ptr and release it.
		auto ptr = std::move(*_iter);
		m_vecObserver.erase(_iter);

		ptr.release();
	}
	else
	{
		std::cout << "[Subject::Unregister] failed find _observer." << std::endl;
	}
}

void Subject::Notify(const Entity& entity, E_EVENT_TYPE eType)
{
	vector<unique_ptr<Observer>>::iterator _iter = m_vecObserver.begin();

	while(_iter != m_vecObserver.end())
	{
		(*_iter).get()->onNotify(entity, eType);

		_iter++;
	}
}
