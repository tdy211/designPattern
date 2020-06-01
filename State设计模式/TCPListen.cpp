#include "stdafx.h"
#include "TCPListen.h"
#include"TCPEstablished.h"
#include<iostream>
using namespace std;

void TCPListen::Send(TCPConnection* t)
{
	cout << "TCPListen::Send ²Ù×÷" << endl;
	ChangeState(t, TCPState::Instance("TCPEstablished"));
}
void	TCPListen::Acknowledge(TCPConnection*)
{
	cout << "TCPListen::Acknowledge" << endl;
}