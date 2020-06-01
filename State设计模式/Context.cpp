#include "stdafx.h"
#include "Context.h"
#include"BasicState.h"
#include<iostream>
#include"ConcretStateA.h"
#include"ConcretStateB.h"
#include"ConcretStateC.h"
Context::Context(BasicState* s)
{
	state = s;
}
BasicState* Context::getState()
{
	return state;
}
void Context::setState(BasicState* s)
{
	auto concretA = dynamic_cast<ConcretStateA*>(s);
	auto concretB= dynamic_cast<ConcretStateB*>(s);
	auto concretC = dynamic_cast<ConcretStateC*>(s);
	if (concretA)
		std::cout << "当前状态" << typeid(concretA).name() << std::endl;
	else if(concretB)
		std::cout << "当前状态" << typeid(concretB).name() << std::endl;
	else
		std::cout << "当前状态" << typeid(concretC).name() << std::endl;
	state = s;
}
void Context::Request()
{
	state->Handle(this);

}
Context::~Context()
{
}
