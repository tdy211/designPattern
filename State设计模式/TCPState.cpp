#include "stdafx.h"
#include "TCPState.h"
#include"TCPConnection.h"
#include"TCPListen.h"
#include"TCPClosed.h"
#include"TCPEstablished.h"
#include<iostream>
void TCPState::Transmit(TCPConnection*, TCPOctetStream*)//传送
{
	std::cout << "TCPState::Transmit" << std::endl;

}
void TCPState::ActiveOpen(TCPConnection* t)//主动打开
{
	std::cout << "TCPState::ActiveOpen" << std::endl;
}
void TCPState::PassiveOpen(TCPConnection* t)//被动打开
{
	std::cout << "TCPState::ActiveOpen" << std::endl;
}
void TCPState::Close(TCPConnection* t)//关闭
{
	std::cout << "TCPState::PassiveOpen" << std::endl;
}
void TCPState::Synchronize(TCPConnection* t)//同步
{
	std::cout << "TCPState::Synchronize" << std::endl;
}
void TCPState::Acknowledge(TCPConnection* t)//收到
{
	std::cout << "TCPState::Acknowledge" << std::endl;
}
void TCPState::Send(TCPConnection* t)//发送
{
	std::cout << "TCPState::Send" << std::endl;
}

TCPState*TCPState::instance = nullptr;
void TCPState::ChangeState(TCPConnection* t, TCPState* s)
{
	t->changeState(s);
}
TCPState* TCPState::Instance(const std::string name)
{

	if (name == "TCPListen")
	{
			instance = new TCPListen;
	}

	if (name == "TCPClosed")
	{
			instance = new TCPClosed;
	}

	if (name == "TCPEstablished")
	{
			instance = new TCPEstablished;
	}

	return instance;
}