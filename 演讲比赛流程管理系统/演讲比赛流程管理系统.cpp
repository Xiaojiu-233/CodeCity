#include <iostream>
#include "SpeechManager.h"
#include <ctime>
using namespace std;

int main()
{
	srand((unsigned int )time(NULL));

	SpeechManager sm;

	//测试用 查看选手是否创造。
	/*for (map<int, Speaker>::iterator it = sm.m_Speaker.begin(); it != sm.m_Speaker.end(); it++)
	{
		cout << "选手编号： " << it->first << "  "
			 << "姓名： " << it->second.m_Name    << "  "
			 << "得分： " << it->second.m_Score[0]   << "  " << endl;
	}*/

	int choice = 0; //用于储存用户选择

	while (1)
	{
		sm.Show_Menu();

		cout << "请输入您的选择" << endl;

		cin >> choice;  //用于接收用户选择

		switch (choice)
		{
		case 1 :  //开始比赛
			sm.startSpeech();
			break;
		case 2:   //查看记录
			sm.loadRecord();
			sm.showRecord();
			break;
		case 3:   //清空记录
			sm.clearRecord();
			break;
		case 0:   //退出系统
			sm.Exit_System();
			break;
		default:
			system("cls"); //清屏
			break;
		}
	}

	

	system("pause");

	return 0;
}