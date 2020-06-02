#pragma once
#include "Ifactory.h"
namespace FactoryMethod
{
	class SubFactory :
		public Ifactory
	{
		virtual	Operation* CreatOperation() override;

	};

}