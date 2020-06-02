#pragma once
namespace FactoryMethod
{ 
class Operation;
class Ifactory
{
public:
virtual	Operation* CreatOperation()=0;

};

}