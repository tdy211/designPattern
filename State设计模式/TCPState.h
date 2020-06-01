#pragma once
#include<string>
class TCPConnection;
class TCPOctetStream;
class TCPState
{
public:
	static TCPState* Instance(const std::string name);
	virtual ~TCPState(){};
	virtual void Transmit(TCPConnection*, TCPOctetStream*);
	virtual void ActiveOpen(TCPConnection*);
	virtual void PassiveOpen(TCPConnection*);
	virtual void Close(TCPConnection*);
	virtual void Synchronize(TCPConnection*);
	virtual	void Acknowledge(TCPConnection*);
	virtual	void Send(TCPConnection*);
protected:
	void ChangeState(TCPConnection*, TCPState*);
	TCPState()=default;
private:
	static TCPState* instance;
};

