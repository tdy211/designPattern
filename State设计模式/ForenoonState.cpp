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
		std::cout << "��ǰʱ����" << w->hour << "�㣬���繤��������ٱ���ForenoonState��" << std::endl;
	}
	else
	{
		//����12�㣬ת�����繤��״̬
		w->setState(new NoonState);
		w->WritePrograme();
	}

}