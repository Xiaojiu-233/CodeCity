#pragma once
#include <iostream>
using namespace std;
#include "Worker.h"

//������ͨԱ���ࣨ�̳�ְ���ࣩ
class Employee :public Worker
{
public:
	Employee(int id, string name, int did);

	virtual void showInfo();

	virtual string getDeptName();//��ȡ��λ����

};
