#include "stdafx.h"
#include "EveningState.h"
#include"Work.h"
#include"EveningState.h"
#include<iostream>
#include"RestState.h"
#include"SleepingState.h"
EveningState::EveningState()
{
}


EveningState::~EveningState()
{
}
void EveningState::WritePrograme(Work* w)
{
	if (w->getTaskFinished())
	{
		w->setState(new RestState);
		w->WritePrograme();
		
	}
	else
	{
		if (w->hour < 21)
		{
			std::cout << "当前时间是" << w->hour << "点，加班哦，疲惫（EveningState）" << std::endl;
		}
		else
		{
			//超过21点，睡眠状态
			w->setState(new SleepingState);
			w->WritePrograme();
		}

	}

}