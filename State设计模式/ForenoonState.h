#pragma once
#include "MyState.h"
class Work;
class ForenoonState :
	public MyState
{
public:
	virtual void WritePrograme(Work* w) override;
	ForenoonState();
	~ForenoonState();
};

