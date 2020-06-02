#include <iostream>
#include"Operation.h"
#include"OperationAdd.h"
#include"OperationSub.h"
#include"Operationfactory.h"
int main()
{
	Operation* oper = Operationfactory::createOperate("+");
	oper->setA(1.0f);
	oper->setB(2.0f);
	std::cout <<"加法"<< oper->GetResult() << std::endl;

	Operation* operSub = Operationfactory::createOperate("-");
	operSub->setA(1.0f);
	operSub->setB(2.0f);
	std::cout <<"减法"<< operSub->GetResult() << std::endl;
}

