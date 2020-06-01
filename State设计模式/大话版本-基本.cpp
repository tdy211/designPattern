#include"stdafx.h"
#include<iostream>
using namespace std;
#include"Context.h"
#include"BasicState.h"
#include"ConcretStateA.h"
int main()
{
	Context c = Context(new ConcretStateA);
	c.Request();
	c.Request();
	c.Request();
	c.Request();
	c.Request();
	c.Request();
	int a;
	cin >> a;
	
	
}