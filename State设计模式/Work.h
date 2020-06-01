#pragma once
#include"stdafx.h"
#include"MyState.h"
class Work
{
public:
	Work();
	~Work();
	double hour;
	bool getTaskFinished();
	void setTaskFinished(bool);
	void setState(MyState* s);
	void WritePrograme();
private:
	MyState *current;
	bool finished;
};

