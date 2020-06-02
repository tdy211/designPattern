#include "AddFactory.h"
#include"OperationAdd.h"
namespace FactoryMethod
{

	Operation * AddFactory::CreatOperation()
	{
		return new OperationAdd;
	}
}