#include <iostream>
using namespace std;
#include "workerManager.h"
#include "Worker.h"
#include "Employee.h"

int main()
{
	//设置主界面对象（创建主界面环境）

	WorkerManager wm;


	int choice = 0;

	while (1)
	{
		//启动主界面菜单
		wm.showMenu();

		//选择界面

		cout << "请输入您的选择。" << endl;
		cin >> choice;

		switch (choice)
		{
		case 0:
			//启动主界面退出功能
			wm.exitSystem();
			break;
		case 1:
			wm.Add_Emp();
			break;
		case 2:
			wm.Show_Emp();
			break;
		case 3:
			wm.Del_Emp();
			break;
		case 4:
			wm.Mod_Emp();
			break;
		case 5:
			wm.Find_Emp();
			break;
		case 6:
			wm.Sort_Emp();
			break;
		case 7:
			wm.Clean_File();
			break;
		default:
			break;



		}
		system("cls");
	}


	system("pause");
	return 0;
}