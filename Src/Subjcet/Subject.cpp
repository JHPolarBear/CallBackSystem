#include "Subject.h"

void Subject::Register(Observer* _observer)
{
	std::vector<Observer*>::iterator _iter = std::find(m_vecObserver.begin(), m_vecObserver.end(), _observer);
	if(_iter == m_vecObserver.end())
	{
		m_vecObserver.push_back(_observer);
	}
	else
	{
		std::cout << "[Subject::Register] _observer already exists." << std::endl;
	}	
}

void Subject::Unregister(Observer* _observer)
{
	std::vector<Observer*>::iterator _iter = std::find(m_vecObserver.begin(), m_vecObserver.end(), _observer);
	if (_iter != m_vecObserver.end())
	{
		m_vecObserver.erase(_iter);
	}
	else
	{
		std::cout << "[Subject::Unregister] failed find _observer." << std::endl;
	}
}
