
#include"stdafx.h"
#include"SingletonBase.h"

int main()
{
	SingletonBase* mySingleton = SingletonBase::Instance("SingletonA");
	mySingleton = SingletonBase::Instance("SingletonB");
}