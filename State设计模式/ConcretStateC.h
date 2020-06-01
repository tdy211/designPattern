#pragma once
#include "BasicState.h"
class ConcretStateC :
	public BasicState
{
public:
	ConcretStateC();
	~ConcretStateC();
	virtual void Handle(Context* context) override;
};

