#pragma once
#include <iostream>
using namespace std;
#include "Worker.h"

//�����ϰ��ࣨ�̳�ְ���ࣩ
class Boss :public Worker
{
public:
	Boss(int id, string name, int did);

	virtual void showInfo();//�����Ϣ����

	virtual string getDeptName();//��ȡ��λ����

};