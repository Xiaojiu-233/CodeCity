#pragma once
#include <iostream>
using namespace std;
#include "Worker.h"

//设置普通员工类（继承职工类）
class Employee :public Worker
{
public:
	Employee(int id, string name, int did);

	virtual void showInfo();

	virtual string getDeptName();//获取岗位名称

};
