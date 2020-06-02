#include "SubFactory.h"
#include"OperationSub.h"
namespace FactoryMethod
{
	Operation * SubFactory::CreatOperation()
	{
		return new OperationSub;
	}
}