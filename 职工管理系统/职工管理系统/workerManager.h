#pragma once
#include <iostream>
using namespace std;
#include "Worker.h"
#include "Employee.h"
#include "Manager.h"
#include "Boss.h"
#include <fstream>
#define FILENAME "empFile.xiaojiu"


//设置主界面类（控制面板）

class WorkerManager
{

public:

	//行为一览

	WorkerManager();

	~WorkerManager();

	void showMenu();

	void Add_Emp();

	void exitSystem();

	void save();

	int get_EmpNum();

	void init_Emp();

	void Show_Emp();

	void Del_Emp();

    int isExist(int id);

	void Mod_Emp();

	void Find_Emp();

	void Sort_Emp();

	void Clean_File();

	//属性一览

	//职工数量
	int m_EmpNum;

	//职工数组指针
	Worker** m_EmpArray;

	//标志：判断文件是否为空
	bool m_FileIsEmpty;


	
};