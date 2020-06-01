#include "stdafx.h"
#include "TCPConnection.h"
#include"TCPState.h"
#include"TCPClosed.h"
#include<iostream>

TCPConnection::TCPConnection()
{
	_state = TCPState::Instance("TCPClosed");
}
void TCPConnection::changeState(TCPState* s)
{
	_state = s;
}
void TCPConnection::ActiveOpen()
{
	_state->ActiveOpen(this);
}
void TCPConnection::PassiveOpen()
{
	_state->PassiveOpen(this);
}
void TCPConnection::Acknowledge()
{
	_state->Acknowledge(this);
}
void TCPConnection::Synchronize()
{
	_state->Synchronize(this);
}
void TCPConnection::ProcessOctet(TCPOctetStream* o)
{
	std::cout << "TCPConnection::ProcessOctet" << std::endl;
}