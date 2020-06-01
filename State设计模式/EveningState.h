#pragma once
#include"MyState.h"
class Work;
class EveningState :
	public MyState
{
public:
	virtual void WritePrograme(Work* w) override;
	EveningState();
	~EveningState();
};

