#pragma once

#include <vector>
#include <iostream>
#include <memory>

#include "../Observer/Observer.h"

/** 대상 클래스 - 자신을 관찰하는 관찰자 인스턴스 리스트로 관리하며, 
	이벤트 발생 시 등록된 관찰자들에게 Notify로 이벤트를 전달한다.	**/

/** Subject Calss - Manage observe objects with list(vector>
	use Notify() function to pass event to registered observers when event occurs **/
class Subject
{
public:
	Subject();
	virtual ~Subject();

	// Register observer
	void Register(std::shared_ptr<Observer> _observer);

	// Unregister observer
	void Unregister(std::shared_ptr<Observer> _observer);

	// notify that event occured to all registered observers
	void Notify(const Entity& entity, E_EVENT_TYPE eType);

protected:
	// vector to manage observer
	std::vector<std::shared_ptr<Observer>> m_vecObserver;
};