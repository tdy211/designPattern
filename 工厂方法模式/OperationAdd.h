#pragma once
#include "Operation.h"
namespace FactoryMethod
{

	class OperationAdd :
		public Operation
	{
	public:
		void setA(const float val);
		void setB(const float val);
		virtual float GetResult() override;
	};

}