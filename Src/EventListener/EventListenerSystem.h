/***********************************************************
- Interface of EventListenerManager class  which
  managing observer class.
- Written by: JHP
***********************************************************/
#pragma once

#include <iostream>

#include "EventListenerManager.h"
#include "../Common/CommonDefines.h"

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
