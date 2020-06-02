#include "..\工厂方法模式\OperationAdd.h"
#include "..\工厂方法模式\OperationAdd.h"
#include "OperationAdd.h"

float OperationAdd::setA()
{
	return 0.0f;
}

float OperationAdd::setB()
{
	return 0.0f;
}

float OperationAdd::GetResult()
{
	return getA()+getB();
}
