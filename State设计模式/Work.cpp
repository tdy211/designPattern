#include "stdafx.h"
#include "Work.h"
#include"ForenoonState.h"
#include"MyState.h"
Work::Work()
{
	current = new ForenoonState;
}

void Work::setState(MyState* s)
{
	current = s;
}
void Work::WritePrograme()
{
	current->WritePrograme(this);
}
Work::~Work()
{
}
bool Work::getTaskFinished()
{
	return finished;
}
void Work::setTaskFinished(bool b)
{
	finished = b;
}