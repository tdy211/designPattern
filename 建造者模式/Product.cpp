#include "Product.h"
#include<iostream>
void Product::Add(string part)
{
	parts.push_back(part);
}

void Product::Show()
{
	cout << "��Ʒ����" << endl;
	for (auto part : parts)
	{
		cout << part << endl;
	}
	
}
