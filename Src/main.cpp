#include <iostream>

#include "EventListener\EventListenerSystem.h"

using namespace std;

int main()
{
	//Initialize EventListener system
	EventListenerSystem::Initialize();

	cout << "Hello CMake." << endl;
	return 0;
}