#include "stdafx.h"
#include "ConcretStateA.h"
#include<iostream>
#include "ConcretStateB.h"
#include"Context.h"
ConcretStateA::ConcretStateA()
{
}


ConcretStateA::~ConcretStateA()
{
}
void ConcretStateA::Handle(Context* context)
{
	std::cout << "当前处理ConcretStateA::Handle事项" << std::endl;
	//设置下一个状态
	context->setState(new ConcretStateB);
}