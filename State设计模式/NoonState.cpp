#include "stdafx.h"
#include "NoonState.h"
#include"AfternoonState.h"
#include"Work.h"
#include<iostream>
NoonState::NoonState()
{
}


NoonState::~NoonState()
{
}
void NoonState::WritePrograme(Work* w)
{
	if (w->hour < 13)
	{
		std::cout << "当前时间是" << w->hour << "点，饿了，午饭；犯困，午休（NoonState）" << std::endl;
	}
	else
	{
		//超过13点，进入下午工作状态
		w->setState(new AfternoonState);
		w->WritePrograme();
	}


}