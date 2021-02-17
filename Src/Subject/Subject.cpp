#include "Subject.h"

using namespace std;

Subject::Subject()
{
	
}

Subject::~Subject()
{
	// Release all Shared ptr
	if(m_vecObserver.size())
	{
		std::vector<std::shared_ptr<Observer>>::iterator _iter = m_vecObserver.begin();

		while(_iter != m_vecObserver.end())
		{
			_iter = m_vecObserver.erase(_iter);
		}
	}
}

void Subject::Register(shared_ptr<Observer> _observer)
{
	std::vector<shared_ptr<Observer>>::iterator _iter = std::find(m_vecObserver.begin(), m_vecObserver.end(), _observer);
	if(_iter == m_vecObserver.end())
	{
		m_vecObserver.push_back(_observer);
	}
	else
	{
		std::cout << "[Subject::Register] _observer already exists." << std::endl;
	}	
}

void Subject::Unregister(shared_ptr<Observer> _observer)
{
	std::vector<shared_ptr<Observer>>::iterator _iter = std::find(m_vecObserver.begin(), m_vecObserver.end(), _observer);
	if (_iter != m_vecObserver.end())
	{
		m_vecObserver.erase(_iter);
	}
	else
	{
		std::cout << "[Subject::Unregister] failed find _observer." << std::endl;
	}
}

void Subject::Notify(E_EVENT_TYPE eType)
{
	vector<shared_ptr<Observer>>::iterator _iter = m_vecObserver.begin();

	while(_iter != m_vecObserver.end())
	{
		(*_iter).get()->onNotify(eType);

		_iter++;
	}
}
