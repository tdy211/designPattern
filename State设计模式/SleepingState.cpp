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

		std::cout << "��ǰʱ����" << w->hour << "�㣬�����ˣ�˯���ˣ�SleepingState��" << std::endl;

}