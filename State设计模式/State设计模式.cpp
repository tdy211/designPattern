// MyState设计模式.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include"TCPConnection.h"
#include"TCPState.h"
#include"TCPClosed.h"
#include"TCPEstablished.h"
#include"TCPListen.h"
#include"TCPOctetStream.h"

int _tmain_(int argc, _TCHAR* argv[])
{
	TCPOctetStream*stream = new TCPOctetStream;
	TCPConnection* connection = new TCPConnection;

	TCPState* state1 =TCPState::Instance("TCPClosed");
	state1->ActiveOpen(connection);
	connection->Acknowledge();

	TCPState* state2 = TCPState::Instance("TCPListen");
	state2->Send(connection);
	connection->Acknowledge();
	TCPState* state3 = TCPState::Instance("TCPEstablished");
	state3->Transmit(connection,stream);
	connection->Acknowledge();
	return 0;
}
//TCPClosed::ActiveOpen 操作
//TCPEstablished::Acknowledge
//TCPListen::Send 操作
//TCPEstablished::Acknowledge
//TCPConnection::ProcessOctet
//TCPEstablished::Acknowledge