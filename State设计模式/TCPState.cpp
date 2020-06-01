#include "stdafx.h"
#include "TCPState.h"
#include"TCPConnection.h"
#include"TCPListen.h"
#include"TCPClosed.h"
#include"TCPEstablished.h"
#include<iostream>
void TCPState::Transmit(TCPConnection*, TCPOctetStream*)//����
{
	std::cout << "TCPState::Transmit" << std::endl;

}
void TCPState::ActiveOpen(TCPConnection* t)//������
{
	std::cout << "TCPState::ActiveOpen" << std::endl;
}
void TCPState::PassiveOpen(TCPConnection* t)//������
{
	std::cout << "TCPState::ActiveOpen" << std::endl;
}
void TCPState::Close(TCPConnection* t)//�ر�
{
	std::cout << "TCPState::PassiveOpen" << std::endl;
}
void TCPState::Synchronize(TCPConnection* t)//ͬ��
{
	std::cout << "TCPState::Synchronize" << std::endl;
}
void TCPState::Acknowledge(TCPConnection* t)//�յ�
{
	std::cout << "TCPState::Acknowledge" << std::endl;
}
void TCPState::Send(TCPConnection* t)//����
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