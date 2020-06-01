#pragma once
#include"TCPState.h"
class TCPClosed :public TCPState
{
	friend class TCPState;
public:
	virtual void ActiveOpen(TCPConnection*) override;
	virtual void PassiveOpen(TCPConnection*) override;
	virtual	void Acknowledge(TCPConnection*)override;
private:
	TCPClosed(){};

};
