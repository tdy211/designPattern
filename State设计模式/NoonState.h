#pragma once
#include "MyState.h"
class Work;
class NoonState :
	public MyState
{
public:
	virtual void WritePrograme(Work* w) override;
	NoonState();
	~NoonState();
};

