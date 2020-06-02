#include "OperationAdd.h"
namespace FactoryMethod
{

	void OperationAdd::setA(const float val)
	{
		m_numberA = val;
	}

	void OperationAdd::setB(const float val)
	{
		m_numberA = val;
	}
	float OperationAdd::GetResult()
	{
		return m_numberA + m_numberB;
	}
}