#pragma once
#include "SingletonBase.h"
class SingletonA :
	public SingletonBase
{
	friend class SingletonBase;
public:
	~SingletonA();
private:
	SingletonA();
};

