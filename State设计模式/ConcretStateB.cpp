#include "stdafx.h"
#include "ConcretStateB.h"
#include"ConcretStateC.h"
#include<iostream>
#include"Context.h"
ConcretStateB::ConcretStateB()
{
}


ConcretStateB::~ConcretStateB()
{
}
void ConcretStateB::Handle(Context* context)
{
	std::cout << "当前处理ConcretStateB::Handle事项" << std::endl;
	context->setState(new ConcretStateC);
}