#pragma once

/***********************************************************
* Sample listener class for testing
* 테스트를 위한 샘플 리스너 클래스
* Written by: JHP
***********************************************************/

#include "../Observer/Observer.h"

class CQuestListener: public Observer
{
    void onNotify(E_EVENT_TYPE etype) override;
};

class CSoundListener: public Observer
{
    void onNotify(E_EVENT_TYPE etype) override; 
};