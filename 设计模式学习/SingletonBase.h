#pragma once
#include<string>
class SingletonBase
{
public:
	static SingletonBase* Instance(std::string childClassName);
	virtual ~SingletonBase();
	SingletonBase(SingletonBase&) = delete;
protected:
	SingletonBase();
private:
	static SingletonBase* instance;

};

