#pragma once
#include<vector>
#include<string>
using namespace std;
class Product
{
public:
	void Add(string part);
	void Show();
private:
	vector<string> parts;

};

