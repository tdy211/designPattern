#pragma once
#include "BasicState.h"
class Context;
class ConcretStateA :
	public BasicState
{
public:
	ConcretStateA();
	~ConcretStateA();
	virtual void Handle(Context* context) override;
};

