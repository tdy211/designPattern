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
		std::cout << "��ǰʱ����" << w->hour << "�㣬���ˣ��緹�����������ݣ�NoonState��" << std::endl;
	}
	else
	{
		//����13�㣬�������繤��״̬
		w->setState(new AfternoonState);
		w->WritePrograme();
	}


}