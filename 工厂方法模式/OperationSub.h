#pragma once
#include "Operation.h"
namespace FactoryMethod
{
	class OperationSub :
		public Operation
	{
	public:
		void setA(const float val);
		void setB(const float val);
		virtual float GetResult() override;
	};

}