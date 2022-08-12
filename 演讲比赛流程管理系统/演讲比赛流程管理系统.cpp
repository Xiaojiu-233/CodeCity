#include <iostream>
#include "SpeechManager.h"
#include <ctime>
using namespace std;

int main()
{
	srand((unsigned int )time(NULL));

	SpeechManager sm;

	//������ �鿴ѡ���Ƿ��졣
	/*for (map<int, Speaker>::iterator it = sm.m_Speaker.begin(); it != sm.m_Speaker.end(); it++)
	{
		cout << "ѡ�ֱ�ţ� " << it->first << "  "
			 << "������ " << it->second.m_Name    << "  "
			 << "�÷֣� " << it->second.m_Score[0]   << "  " << endl;
	}*/

	int choice = 0; //���ڴ����û�ѡ��

	while (1)
	{
		sm.Show_Menu();

		cout << "����������ѡ��" << endl;

		cin >> choice;  //���ڽ����û�ѡ��

		switch (choice)
		{
		case 1 :  //��ʼ����
			sm.startSpeech();
			break;
		case 2:   //�鿴��¼
			sm.loadRecord();
			sm.showRecord();
			break;
		case 3:   //��ռ�¼
			sm.clearRecord();
			break;
		case 0:   //�˳�ϵͳ
			sm.Exit_System();
			break;
		default:
			system("cls"); //����
			break;
		}
	}

	

	system("pause");

	return 0;
}