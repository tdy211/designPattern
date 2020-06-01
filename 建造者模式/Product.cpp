#include "Product.h"
#include<iostream>
void Product::Add(string part)
{
	parts.push_back(part);
}

void Product::Show()
{
	cout << "产品创建" << endl;
	for (auto part : parts)
	{
		cout << part << endl;
	}
	
}
