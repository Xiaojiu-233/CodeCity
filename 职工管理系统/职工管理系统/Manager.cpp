#include "Manager.h"

//�����ຯ���趨

Manager::Manager(int id, string name, int did)
{
	this->m_id = id;
	this->m_name = name;
	this->m_did = did;
}



void Manager::showInfo()
{
	cout << "ְ����ţ� " << this->m_id
		<< "\tְ�������� " << this->m_name
		<< "\t��λ�� " << this->getDeptName()
		<< "\t��λְ������ϰ彻�������񣬲��·������Ա���� " << endl;

}

string Manager::getDeptName()
{
	return string("����");
}
