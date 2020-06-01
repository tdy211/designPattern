#pragma once
class Context;
class BasicState
{
public:
	virtual void Handle(Context* context){};
	BasicState();
	~BasicState();
};

