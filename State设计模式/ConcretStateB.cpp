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
	std::cout << "��ǰ����ConcretStateB::Handle����" << std::endl;
	context->setState(new ConcretStateC);
}