#include "OperationSub.h"

namespace FactoryMethod
{
	void OperationSub::setA(const float val)
	{
		m_numberA = val;
	}
	void OperationSub::setB(const float val)
	{
		m_numberB = val;
	}
	float OperationSub::GetResult()
	{
		return m_numberA - m_numberB;
	}
}