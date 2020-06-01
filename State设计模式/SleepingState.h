#pragma once
#include "MyState.h"
class Work;
class SleepingState :
	public MyState
{
public:
	virtual void WritePrograme(Work* w) override;
	SleepingState();
	~SleepingState();
};

