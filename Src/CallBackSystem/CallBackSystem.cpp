// CallBackSystem.cpp : 애플리케이션의 진입점을 정의합니다.
//

#include "CallBackSystem.h"

namespace CallbackSystem
{
	static CallbackManager* m_pCallbackManager;
	void Initialize()
	{
		if(!m_pCallbackManager)
		{
			m_pCallbackManager = new CallbackManager();
		}
	}
};
