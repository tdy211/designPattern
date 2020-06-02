#pragma once
class Strategy;
class StrategyContext
{
private:
	Strategy* strategy;
public:
	StrategyContext(Strategy* strgy);
	~StrategyContext();
	void ContextInterface();

};

