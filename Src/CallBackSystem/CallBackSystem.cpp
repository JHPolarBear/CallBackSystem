#include "CallBackSystem.h"

namespace CallbackSystem
{
	std::unique_ptr<CallbackManager> m_pCallbackManager;
	void Initialize()
	{
		if(!m_pCallbackManager)
		{
			m_pCallbackManager = std::make_unique<CallbackManager>();
		}
	}
	void Register(std::shared_ptr<Observer> _observer)
	{
		RETURN(!m_pCallbackManager);

		m_pCallbackManager->Register(_observer);
	}
	void Unregister(std::shared_ptr<Observer> _observer)
	{
		RETURN(!m_pCallbackManager);

		m_pCallbackManager->Unregister(_observer);
	}
	void Notify(const Entity & entity, E_EVENT_TYPE eType)
	{
	}
};
