#include "ConcretBuilder1.h"
#include"Product.h"
void ConcretBuilder1::BuildPartA()
{
	product->Add("����A");
}

void ConcretBuilder1::BuildPartB()
{
	product->Add("����B");
}

Product ConcretBuilder1::GetResult()
{
	return *product;
}

ConcretBuilder1::ConcretBuilder1()
{
	product = new Product;
}

ConcretBuilder1::~ConcretBuilder1()
{
	if (product) delete product;
}
