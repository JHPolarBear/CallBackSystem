#include "Sample_Listener.h"

using namespace std;

// Defines the function the listener should perform according to E_EVENT_TYPE
// E_EVENT_TYPE에 따라 리스너가 수행해야 하는 기능을 정의

void CQuestListener::onNotify(E_EVENT_TYPE etype)
{
    switch (etype)
    {
    case E_EVENT_TYPE_PRINT_WELCOME:
        {
            cout << "Welcome to Quest System" << endl;
        }
        break;
    
    case E_EVENT_TYPE_PRINT_GOODBYE:
        {
            cout << "Good bye from Quest System" << endl;
        }
        break;
    
    default:
        {
            cout << "There is nothing to do with event type: " << etype << endl;
        }
        break;
    }
}

void CSoundListener::onNotify(E_EVENT_TYPE etype)
{
    switch (etype)
    {
    case E_EVENT_TYPE_PRINT_WELCOME:
        {
            cout << "Welcome to Sound System" << endl;
        }
        break;

    case E_EVENT_TYPE_PRINT_GOODBYE:
        {
            cout << "Good bye from Sound System" << endl;
        }
        break;
    
    default:
        {
            cout << "There is nothing to do with event type: " << etype << endl;
        }
        break;
    }
}