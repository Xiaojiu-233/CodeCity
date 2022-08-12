#pragma once
#include <iostream>
using namespace std;
#include "Worker.h"

//设置经理类（继承职工类）
class Manager :public Worker
{
public:
	Manager(int id, string name, int did);

	virtual void showInfo();

	virtual string getDeptName();//获取岗位名称

};