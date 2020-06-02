#include "StrategyContext.h"
#include"Strategy.h"
StrategyContext::StrategyContext(Strategy* strgy)
{
	strategy = strgy;
}

StrategyContext::~StrategyContext()
{
	if (strategy)delete strategy;
}

void StrategyContext::ContextInterface()
{
	strategy->AlgorithmInterface();
}
