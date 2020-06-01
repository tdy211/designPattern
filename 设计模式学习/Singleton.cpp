#include "stdafx.h"
#include "Singleton.h"
#include<iostream>
#include"time.h"
Singleton* Singleton::_instance = nullptr;
Singleton::Singleton()
{
}
Singleton* Singleton::Instance()
{
	if (_instance == nullptr)
	{
		_instance = new Singleton;
	}
	return _instance;
}

Singleton::~Singleton()
{
}
void Singleton::ShowLog(string str)
{
	time_t rawtime;
	struct tm * timeinfo;
	time(&rawtime);
	timeinfo = localtime(&rawtime);
	std::cout << asctime(timeinfo) << ":" << str << endl;
}