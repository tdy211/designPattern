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
		std::cout << "��ǰʱ��" << w->hour << "�㣬����״̬������Ҫ����Ŭ����AfternoonState��" << std::endl;
	}
	else
	{
		//����17�㣬ת�������״̬
		w->setState(new EveningState);
		w->WritePrograme();
	}
}