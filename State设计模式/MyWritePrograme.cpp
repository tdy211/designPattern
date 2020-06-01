#include"stdafx.h"
#include"Work.h"
#include"MyState.h"
int main__()
{
	Work* emergencyProjects = new Work;
	emergencyProjects->hour = 9;
	emergencyProjects->WritePrograme();
	emergencyProjects->hour = 10;
	emergencyProjects->WritePrograme();
	emergencyProjects->hour = 12;
	emergencyProjects->WritePrograme();
	emergencyProjects->hour = 13;
	emergencyProjects->WritePrograme();
	emergencyProjects->hour = 14;
	emergencyProjects->WritePrograme();
	emergencyProjects->hour = 17;
	//emergencyProjects->setTaskFinished(false);
	emergencyProjects->setTaskFinished(true);
	emergencyProjects->WritePrograme();
	emergencyProjects->hour = 19;
	emergencyProjects->WritePrograme();
	emergencyProjects->hour = 22;
	emergencyProjects->WritePrograme();
	return 0;
}