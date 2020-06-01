#pragma once
#include "MyState.h"
class Work;
class RestState :
	public MyState
{
public:
	virtual void WritePrograme(Work* w) override;
	RestState();
	~RestState();
};

