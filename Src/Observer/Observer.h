#pragma once

#include "../Common/Entity.h"
#include "../Common/EventDefines.h"
#include "../Common/Common.h"

class Observer
{
public:
	Observer(E_CALLBACK_TYPE eType);
	virtual ~Observer();

	virtual void onNotify(const Entity& entity, E_EVENT_TYPE etype) = 0;

private:
	int m_nID;
};