#include "Boss.h"

//�ϰ��ຯ���趨

Boss::Boss(int id, string name, int did)
{
	this->m_id = id;
	this->m_name = name;
	this->m_did = did;
}



void Boss::showInfo()
{
	cout << "ְ����ţ� " << this->m_id
		<< "\tְ�������� " << this->m_name
		<< "\t��λ�� " << this->getDeptName()
		<< "\t��λְ�𣺹���˾�������� " << endl;

}

string Boss::getDeptName()
{
	return string("�ϰ�");
}