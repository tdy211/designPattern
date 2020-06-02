#pragma once
#include<string>
class Operation;
class Operationfactory
{
public:
	static Operation* createOperate(std::string operateName);
};

