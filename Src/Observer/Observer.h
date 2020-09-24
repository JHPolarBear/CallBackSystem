#pragma once

#include "../Common/Entity.h"
#include "../Common/EventDefines.h"

class Observer
{
public:
	virtual ~Observer();

	virtual void onNotify(const Entity& entity, E_EVENT_TYPE etype) = 0;
};