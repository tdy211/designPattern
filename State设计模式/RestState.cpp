#include "stdafx.h"
#include "RestState.h"
#include"Work.h"
#include<iostream>
RestState::RestState()
{
}


RestState::~RestState()
{
}
void RestState::WritePrograme(Work* w)
{

	std::cout << "��ǰʱ����" << w->hour << "�㣬�°�ؼ��ˣ�RestState��" << std::endl;

}