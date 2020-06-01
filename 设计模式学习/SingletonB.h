#pragma once
#include "SingletonBase.h"
class SingletonB :
	public SingletonBase
{
	friend class SingletonBase;
public:
	~SingletonB();
private:
	SingletonB();
};

