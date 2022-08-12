#pragma once
#include <iostream>
using namespace std;
#include "Worker.h"

//设置老板类（继承职工类）
class Boss :public Worker
{
public:
	Boss(int id, string name, int did);

	virtual void showInfo();//输出信息函数

	virtual string getDeptName();//获取岗位名称

};