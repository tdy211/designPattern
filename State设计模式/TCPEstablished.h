#pragma once
#include"TCPState.h"
class TCPEstablished :public TCPState
{
	friend class TCPState;
public:
	virtual void Transmit(TCPConnection*, TCPOctetStream*) override;
	virtual void Close(TCPConnection*) override;
	virtual	void Acknowledge(TCPConnection*)override;
private:
	TCPEstablished(){};


};

