#pragma once

/***********************************************************
* Base observer class : implement minimum functionality
* 관찰자 기본 클래스 : 관찰자의 최소 기능만 구현
* Written by: JHP
***********************************************************/

#include "../Common/EventDefines.h"
#include "../Common/CommonDefines.h"

class Observer
{
public:
	Observer();
	virtual ~Observer();

	// Handling events passed from subject class
	// Format of parameters should be same with Subject::Notify(...)
	virtual void onNotify(E_EVENT_TYPE etype) = 0;

private:
};