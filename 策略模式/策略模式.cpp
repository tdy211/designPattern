// 策略模式.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
#include <iostream>
#include"StrategyContext.h"
#include"Strategy.h"
#include"ConcretStrategyA.h"
#include"ConcretStrategyB.h"
int main()
{

	StrategyContext context1 =  StrategyContext(new ConcretStrategyA);
	context1.ContextInterface();

	StrategyContext context2 = StrategyContext(new ConcretStrategyB);
	context2.ContextInterface();
}

