#pragma once
#include"MyState.h"
class Work;
class AfternoonState :public MyState
{
public:
	virtual void WritePrograme(Work* w) override;
	AfternoonState();
	~AfternoonState();
};

