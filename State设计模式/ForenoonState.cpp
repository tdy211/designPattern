#include "stdafx.h"
#include "ForenoonState.h"
#include"NoonState.h"
#include"Work.h"
#include<iostream>
ForenoonState::ForenoonState()
{
}


ForenoonState::~ForenoonState()
{
}
void ForenoonState::WritePrograme(Work* w)
{
	if (w->hour < 12)
	{
		std::cout << "当前时间是" << w->hour << "点，上午工作，精神百倍（ForenoonState）" << std::endl;
	}
	else
	{
		//超过12点，转入中午工作状态
		w->setState(new NoonState);
		w->WritePrograme();
	}

}