#pragma once
#include "Ifactory.h"
namespace FactoryMethod
{

	class AddFactory :
		public Ifactory
	{
	public:
		virtual	Operation* CreatOperation() override;
	};

}