#include <iostream>

#include "CallBackSystem\CallBackSystem.h"

using namespace std;

int main()
{
	//Initialize Callback system
	CallbackSystem::Initialize();

	cout << "Hello CMake." << endl;
	return 0;
}