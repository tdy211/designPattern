#pragma once
namespace FactoryMethod
{
	class Operation
	{
	protected:
		float m_numberA;
		float m_numberB;
	public:
		virtual float GetResult() = 0;
		void setA(float a);
		void setB(float b);
	};

}