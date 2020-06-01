#pragma once
#include "Builder.h"
//#include"Product.h"
//class Builder;
class Product;
class ConcretBuilder1 :
	public Builder
{
public:
	virtual void BuildPartA() override;
	virtual void BuildPartB() override;
	virtual Product GetResult() override;
	ConcretBuilder1();
	~ConcretBuilder1();
private:
	Product* product;
};

