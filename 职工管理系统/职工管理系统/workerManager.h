#pragma once
#include <iostream>
using namespace std;
#include "Worker.h"
#include "Employee.h"
#include "Manager.h"
#include "Boss.h"
#include <fstream>
#define FILENAME "empFile.xiaojiu"


//�����������ࣨ������壩

class WorkerManager
{

public:

	//��Ϊһ��

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

	//����һ��

	//ְ������
	int m_EmpNum;

	//ְ������ָ��
	Worker** m_EmpArray;

	//��־���ж��ļ��Ƿ�Ϊ��
	bool m_FileIsEmpty;


	
};