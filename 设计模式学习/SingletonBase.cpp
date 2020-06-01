#include "stdafx.h"
#include "SingletonBase.h"
#include"SingletonA.h"
#include"SingletonB.h"
SingletonBase* SingletonBase::instance = nullptr;
SingletonBase* SingletonBase::Instance(std::string childClassName)
{
	if (childClassName == "SingletonA")
	{
		instance = new SingletonA;
	}
	else if (childClassName == "SingletonB")
	{
		instance = new SingletonB;
	}
	return instance;
}
SingletonBase::SingletonBase()
{

}
SingletonBase::~SingletonBase()
{
}
