#pragma once

#include "../Common/Entity.h"
#include "../Common/EventDefines.h"
#include "../Common/Common.h"

/** Base observer class : implement minimum functionality 
 * 관찰자 기본 클래스 : 관찰자의 최소 기능만 구현			**/
class Observer
{
public:
	Observer();
	virtual ~Observer();

	virtual void onNotify(const Entity& entity, E_EVENT_TYPE etype) = 0;

private:
};