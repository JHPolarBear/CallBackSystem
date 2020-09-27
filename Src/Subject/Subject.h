#pragma once

#include <vector>
#include <iostream>
#include <memory>

#include "../Observer/Observer.h"

class Subject
{
public:
	virtual ~Subject();

	void Register(std::shared_ptr<Observer> _observer);

	void Unregister(std::shared_ptr<Observer> _observer);

	void Notify(const Entity& entity, E_EVENT_TYPE eType);

protected:
	std::vector<std::shared_ptr<Observer>> m_vecObserver;
};