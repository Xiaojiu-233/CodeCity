#pragma once
#include <iostream>
using namespace std;
#include "Worker.h"

//���þ����ࣨ�̳�ְ���ࣩ
class Manager :public Worker
{
public:
	Manager(int id, string name, int did);

	virtual void showInfo();

	virtual string getDeptName();//��ȡ��λ����

};