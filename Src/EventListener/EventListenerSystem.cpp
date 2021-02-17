#include "EventListenerSystem.h"

namespace EventListenerSystem
{
	// Event System hold unique pointer of Event listener manager 
	std::unique_ptr<EventListenerManager> m_pEventListenerManager;

	void Initialize()
	{
		if(!m_pEventListenerManager)
		{
			m_pEventListenerManager = std::make_unique<EventListenerManager>();
		}
	}
	void AddListener(std::shared_ptr<Observer> _observer)
	{
		RETURN(!m_pEventListenerManager);

		m_pEventListenerManager->Register(_observer);
	}
	void RemoveListener(std::shared_ptr<Observer> _observer)
	{
		RETURN(!m_pEventListenerManager);

		m_pEventListenerManager->Unregister(_observer);
	}
	void DispatchEvent(E_EVENT_TYPE eType)
	{
		RETURN(!m_pEventListenerManager);

		m_pEventListenerManager->Notify(eType);
	}
};
