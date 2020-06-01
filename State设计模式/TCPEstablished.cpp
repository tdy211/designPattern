#include "stdafx.h"
#include "TCPEstablished.h"
#include"TCPConnection.h"
#include"TCPListen.h"
#include<iostream>
void TCPEstablished::Transmit(TCPConnection* t, TCPOctetStream* o)
{
	t->ProcessOctet(o);
}
void TCPEstablished::Close(TCPConnection* t)
{
	ChangeState(t,TCPState ::Instance("TCPListen"));
}
void	TCPEstablished::Acknowledge(TCPConnection*)
{
	std::cout << "TCPEstablished::Acknowledge" << std::endl;
}
