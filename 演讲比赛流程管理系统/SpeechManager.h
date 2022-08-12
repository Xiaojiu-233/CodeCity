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

	//-----------------------------------以下为成员行为------------------------------------------------


	//构造函数
	SpeechManager();

	//析构函数
	~SpeechManager();

	//菜单功能
	void Show_Menu();

	//退出功能
	void Exit_System();

	//初始化功能
	void initSpeech();

	//初始化创建选手功能
	void createSpeaker();

	//开始比赛 - 比赛流程控制
	void startSpeech();

	//抽签
	void speechDraw();

	//比赛
	void speechContest();

	//显示比赛结果
	void showScore();

	//保存记录
	void saveRecord();

	//读取记录
	void loadRecord();

	//显示信息；
	void showRecord();

	//清空记录
	void clearRecord();


	//-----------------------------------以下为成员属性------------------------------------------------

	// 比赛选手 容器 12人
	vector<int>v1;

	// 新一轮晋级选手 容器 12人
	vector<int>v2;

	// 前三名选手 容器 12人
	vector<int>vVictory;

	// 存放 编号 以及 具体选手 的 容器
	map<int, Speaker> m_Speaker;

	// 记录比赛轮数
	int m_Index;

	//文件为空的标志
	bool fileIsEmpty;

	//往届记录
	map<int, vector<string>>m_Record;



};