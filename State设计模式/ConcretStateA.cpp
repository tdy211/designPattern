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
	std::cout << "��ǰ����ConcretStateA::Handle����" << std::endl;
	//������һ��״̬
	context->setState(new ConcretStateB);
}