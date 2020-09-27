/***********************************************************
- Interface of CallbackManager class  which
  managing observer class.
- Written by: JHP
***********************************************************/
#pragma once

#include <iostream>

#include "CallbackManager.h"
#include "../Common/Common.h"

namespace CallbackSystem
{
	// Initialize
	void Initialize();

	// Register & UnRegister Observer
	void Register(std::shared_ptr<Observer> _observer);

	void Unregister(std::shared_ptr<Observer> _observer);

	// On notify function
	void Notify(const Entity& entity, E_EVENT_TYPE eType);

};
