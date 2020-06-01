#include <iostream>
#include"Director.h"
#include"Builder.h"
#include"Product.h"
#include"ConcretBuilder1.h"
#include"ConcretBuilder2.h"
int main()
{
	Director* director = new Director();
	//可变
	Builder* b1 = new ConcretBuilder1();
	Builder* b2 = new ConcretBuilder2();

	director->Construct(b1);

	Product p1 = b1->GetResult();
	p1.Show();

	director->Construct(b2);
	Product p2 = b2->GetResult();
	p2.Show();

	delete director;
	delete b1;
	delete b2;

}

