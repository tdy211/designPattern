//#include "..\工厂方法模式\OperationSub.h"
//#include "..\工厂方法模式\OperationSub.h"
#include "OperationSub.h"

//void OperationSub::setA(const float val)
//{
//}
//
//void OperationSub::setB(const float val)
//{
//}

float OperationSub::GetResult()
{
	return getA() - getB();
}
