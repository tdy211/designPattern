#include "stdafx.h"
#include "ConcretStateC.h"
#include<iostream>
#include"Context.h"
#include"ConcretStateA.h"
ConcretStateC::ConcretStateC()
{
}


ConcretStateC::~ConcretStateC()
{
}
void ConcretStateC::Handle(Context* context)
{
	std::cout << "��ǰ����ConcretStateC::Handle����" << std::endl;
	context->setState(new ConcretStateA);
}