#pragma once

#include <vector>

#include "../Observer/Observer.h"

class Subject
{
public:
	virtual ~Subject();

protected:
	std::vector<Observer> m_vecObserver;
};