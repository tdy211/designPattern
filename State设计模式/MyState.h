#pragma once
#include"stdafx.h"
class Work;
class MyState
{
public:
	MyState();
	virtual ~MyState();
	virtual void WritePrograme(Work* w);
};

