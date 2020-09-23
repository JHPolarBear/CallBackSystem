#pragma once

#include <vector>
#include <iostream>

#include "../Observer/Observer.h"

class Subject
{
public:
	virtual ~Subject();

	void Register(Observer* _observer);

	void Unregister(Observer* _observer);

protected:
	std::vector<Observer*> m_vecObserver;
};