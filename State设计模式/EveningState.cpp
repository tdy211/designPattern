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
			std::cout << "��ǰʱ����" << w->hour << "�㣬�Ӱ�Ŷ��ƣ����EveningState��" << std::endl;
		}
		else
		{
			//����21�㣬˯��״̬
			w->setState(new SleepingState);
			w->WritePrograme();
		}

	}

}