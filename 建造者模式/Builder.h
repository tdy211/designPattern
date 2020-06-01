#pragma once
class Product;
class Builder
{
public:
	virtual void BuildPartA();
	virtual void BuildPartB();
	virtual Product GetResult()=0;
	
};

