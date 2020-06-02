#pragma once
class Operation
{
private:
	float m_numberA;
	float m_numberB;
public:
	float getA();
	float getB();
	void setA(float);
	void setB(float);
	virtual float GetResult()=0;
};

