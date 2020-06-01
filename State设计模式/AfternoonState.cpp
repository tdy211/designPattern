#include "stdafx.h"
#include "AfternoonState.h"
#include"EveningState.h"
#include<iostream>
#include"Work.h"
AfternoonState::AfternoonState()
{
}
AfternoonState::~AfternoonState()
{
}
void AfternoonState::WritePrograme(Work* w)
{
	if (w->hour < 17)
	{
		std::cout << "当前时间" << w->hour << "点，下午状态不错，需要继续努力（AfternoonState）" << std::endl;
	}
	else
	{
		//超过17点，转入傍晚工作状态
		w->setState(new EveningState);
		w->WritePrograme();
	}
}