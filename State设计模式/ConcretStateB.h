#pragma once
#include"BasicState.h"
class ConcretStateB :
	public BasicState
{
public:
	ConcretStateB();
	~ConcretStateB();
	virtual void Handle(Context* context) override;
};

