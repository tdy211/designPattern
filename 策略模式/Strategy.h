#pragma once
class Strategy
{
public:
	Strategy() = default;
	virtual ~Strategy() = default;
	virtual void AlgorithmInterface()=0;

};

