#include "Operationfactory.h"
#include"Operation.h"
#include"OperationAdd.h"
#include"OperationSub.h"
using namespace std;
Operation* Operationfactory::createOperate(string operateName)
{
	Operation *temp = nullptr;
	if (operateName == "+")
	{
		temp = new OperationAdd();
	}
	if (operateName == "-")
	{
		temp = new OperationSub();
	}

	return temp;
}
