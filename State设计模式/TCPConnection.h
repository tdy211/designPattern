#pragma once
class TCPState;
class TCPClosed;
class TCPOctetStream;
class TCPConnection
{
public:
	TCPConnection();
	void ActiveOpen();
	void PassiveOpen();
	void Close();
	void Send();
	void Acknowledge();
	void Synchronize();
	void ProcessOctet(TCPOctetStream*);
private:
	friend class TCPState;
	void changeState(TCPState*);
private:
	TCPState*_state;

};

