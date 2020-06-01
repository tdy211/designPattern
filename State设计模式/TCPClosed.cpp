#include "stdafx.h"
#include "TCPClosed.h"
#include"TCPListen.h"
#include<iostream>
#include"TCPEstablished.h"
#include"TCPState.h"
using namespace std;
void TCPClosed::ActiveOpen(TCPConnection* t) 
{
	cout << "TCPClosed::ActiveOpen ²Ù×÷" << endl;
	ChangeState(t, TCPState::Instance("TCPEstablished"));
}
void TCPClosed::PassiveOpen(TCPConnection* t)
{
	cout << "TCPClosed::PassiveOpen ²Ù×÷" << endl;
	ChangeState(t, TCPState::Instance("TCPListen"));
}
void	TCPClosed::Acknowledge(TCPConnection*)
{
	std::cout << "TCPClosed::Acknowledge" << std::endl;
}