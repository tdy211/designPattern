#pragma once
#include<string>
using namespace std;
class Singleton
{
public:
	static Singleton* Instance();
	~Singleton();
	void ShowLog(string str);

protected:
	Singleton();
private:
	static Singleton* _instance;
};
#define singletonInstance Singleton::Instance()
