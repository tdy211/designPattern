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

	std::cout << "当前时间是" << w->hour << "点，下班回家了（RestState）" << std::endl;

}