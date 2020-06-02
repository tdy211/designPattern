// 工厂方法模式.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。

#include <iostream>
#include"AddFactory.h"
#include"SubFactory.h"
#include"Operation.h"
#include"OperationAdd.h"
#include"OperationSub.h"
#include"Ifactory.h"
          using namespace FactoryMethod;
	int main()
	{
		Ifactory* operFactor = new AddFactory;
		Operation* oper = operFactor->CreatOperation();
		oper->setA(1.0f);
		oper->setB(2.0f);
		std::cout << oper->GetResult();


	}

