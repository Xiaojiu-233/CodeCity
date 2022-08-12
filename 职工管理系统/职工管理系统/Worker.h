#pragma once
#include <iostream>
using namespace std;
#include <string>

//设置职工类
class Worker
{
public:
	


	virtual void showInfo() = 0;

	virtual string getDeptName() = 0;


	int m_id;
	string m_name;
	int m_did;

};