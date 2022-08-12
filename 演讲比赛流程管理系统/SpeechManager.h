#pragma once
#include <iostream>
#include <vector>
#include <map>
#include "speaker.h"
#include <algorithm>
#include <deque>
#include <numeric>
using namespace std;

class SpeechManager
{
public:

	//-----------------------------------����Ϊ��Ա��Ϊ------------------------------------------------


	//���캯��
	SpeechManager();

	//��������
	~SpeechManager();

	//�˵�����
	void Show_Menu();

	//�˳�����
	void Exit_System();

	//��ʼ������
	void initSpeech();

	//��ʼ������ѡ�ֹ���
	void createSpeaker();

	//��ʼ���� - �������̿���
	void startSpeech();

	//��ǩ
	void speechDraw();

	//����
	void speechContest();

	//��ʾ�������
	void showScore();

	//�����¼
	void saveRecord();

	//��ȡ��¼
	void loadRecord();

	//��ʾ��Ϣ��
	void showRecord();

	//��ռ�¼
	void clearRecord();


	//-----------------------------------����Ϊ��Ա����------------------------------------------------

	// ����ѡ�� ���� 12��
	vector<int>v1;

	// ��һ�ֽ���ѡ�� ���� 12��
	vector<int>v2;

	// ǰ����ѡ�� ���� 12��
	vector<int>vVictory;

	// ��� ��� �Լ� ����ѡ�� �� ����
	map<int, Speaker> m_Speaker;

	// ��¼��������
	int m_Index;

	//�ļ�Ϊ�յı�־
	bool fileIsEmpty;

	//�����¼
	map<int, vector<string>>m_Record;



};