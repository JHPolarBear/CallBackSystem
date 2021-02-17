
#include "../Common/CommonDefines.h"

#include "..\EventListener\EventListenerSystem.h"

#include "Sample_Listener.h"

using namespace std;

int main()
{
	// Initialize EventListener system
	EventListenerSystem::Initialize();

	// Create sample listeners
	shared_ptr<CQuestListener> m_QuestListener = make_shared<CQuestListener>();
	shared_ptr<CSoundListener> m_SoundListener = make_shared<CSoundListener>();
	

	// Add listeners to event listener
	EventListenerSystem::AddListener(m_QuestListener);
	// The code below print excetpion message that quest listener is already registered 
	//EventListenerSystem::AddListener(m_QuestListener);
	EventListenerSystem::AddListener(m_SoundListener);

	// Dispatch wecome event - Quest and Sound listeners print message
	EventListenerSystem::DispatchEvent(E_EVENT_TYPE_PRINT_WELCOME);

	// Remove Quest listener
	EventListenerSystem::RemoveListener(m_QuestListener);

	// Dispatch good bye event - only Sound system print message
	EventListenerSystem::DispatchEvent(E_EVENT_TYPE_PRINT_GOODBYE);

	return 0;
}