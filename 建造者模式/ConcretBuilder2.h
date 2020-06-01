#pragma once
#include "Builder.h"
#include"Product.h"
class ConcretBuilder2 :
	public Builder
{
public:
	virtual void BuildPartA() override;
	virtual void BuildPartB() override;
	virtual Product GetResult() override;
	ConcretBuilder2();
	~ConcretBuilder2();
private:
	Product* product;
};

