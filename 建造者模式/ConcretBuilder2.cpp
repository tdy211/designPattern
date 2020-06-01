#include "ConcretBuilder2.h"

void ConcretBuilder2::BuildPartA()
{
	product->Add("部件X");
}

void ConcretBuilder2::BuildPartB()
{
	product->Add("部件Y");
}

Product ConcretBuilder2::GetResult()
{
	return *product;
}

ConcretBuilder2::ConcretBuilder2()
{
	product = new Product;
}

ConcretBuilder2::~ConcretBuilder2()
{
	if (product) delete product;
}
