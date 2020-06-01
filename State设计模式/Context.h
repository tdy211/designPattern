#pragma once
class BasicState;
//具体要做的工作，与状态有关
//request方法用于处理工作，在内部使用当前状态处理工作。
class Context
{
public:
	Context(BasicState* state);
	~Context();
	BasicState* getState();
	void setState(BasicState* s);
	void Request();
private:
	BasicState* state;
};

