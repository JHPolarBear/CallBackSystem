#include "EventListenerSystem.h"

namespace EventListenerSystem
{
	std::unique_ptr<EventListenerManager> m_pEventListenerManager;
	void Initialize()
	{
		if(!m_pEventListenerManager)
		{
			m_pEventListenerManager = std::make_unique<EventListenerManager>();
		}
	}
	void Register(std::shared_ptr<Observer> _observer)
	{
		RETURN(!m_pEventListenerManager);

		m_pEventListenerManager->Register(_observer);
	}
	void Unregister(std::shared_ptr<Observer> _observer)
	{
		RETURN(!m_pEventListenerManager);

		m_pEventListenerManager->Unregister(_observer);
	}
	void Notify(const Entity & entity, E_EVENT_TYPE eType)
	{
	}
};
