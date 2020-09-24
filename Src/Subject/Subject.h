#pragma once

#include <vector>
#include <iostream>
#include <memory>

#include "../Observer/Observer.h"

class Subject
{
public:
	virtual ~Subject();

	void Register(std::unique_ptr<Observer> _observer);

	void Unregister(std::unique_ptr<Observer> _observer);

	void Notify(const Entity& entity, E_EVENT_TYPE eType);

protected:
	std::vector<std::unique_ptr<Observer>> m_vecObserver;
};