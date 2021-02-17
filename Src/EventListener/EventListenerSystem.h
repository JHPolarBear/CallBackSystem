/***********************************************************
- Interface of EventListenerManager class  which
  managing observer class.
- Written by: JHP
***********************************************************/
#pragma once

#include <iostream>

#include "EventListenerManager.h"
#include "../Common/CommonDefines.h"

/** Interface for event listener 
 * 	이벤트 리스너 인터페이스		**/
namespace EventListenerSystem
{
	// Initialize
	void Initialize();

	// Register & UnRegister Observer
	void AddListener(std::shared_ptr<Observer> _observer);

	void RemoveListener(std::shared_ptr<Observer> _observer);

	// On notify function
	void DispatchEvent(E_EVENT_TYPE eType);

};
