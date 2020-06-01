#include "Director.h"
#include"Builder.h"
void Director::Construct(Builder * builder)
{
	builder->BuildPartA();
	builder->BuildPartB();
}
