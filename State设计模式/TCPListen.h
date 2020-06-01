#pragma once
#include"TCPState.h"
class TCPListen :public TCPState
{
	friend class TCPState;
public:
	virtual void Send(TCPConnection*) override;
	virtual	void Acknowledge(TCPConnection*)override;
protected:
	TCPListen(){};


};
