#pragma once
class BasicState;
//����Ҫ���Ĺ�������״̬�й�
//request�������ڴ����������ڲ�ʹ�õ�ǰ״̬��������
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

