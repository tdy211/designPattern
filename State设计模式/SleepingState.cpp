#include "stdafx.h"
#include "SleepingState.h"
#include"Work.h"
#include<iostream>
SleepingState::SleepingState()
{
}


SleepingState::~SleepingState()
{
}
void SleepingState::WritePrograme(Work* w)
{

		std::cout << "当前时间是" << w->hour << "点，不行了，睡着了（SleepingState）" << std::endl;

}