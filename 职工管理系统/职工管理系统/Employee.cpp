#include "Employee.h"

//��ͨԱ���ຯ���趨

Employee::Employee(int id, string name, int did)
{
	this->m_id = id;
	this->m_name = name;
	this->m_did = did;
}



void Employee::showInfo()
{
	cout << "ְ����ţ� " << this->m_id
		<< "\tְ�������� " << this->m_name
		<< "\t��λ�� " << this->getDeptName()
		<< "\t��λְ����ɾ����������� " << endl;

}

string Employee::getDeptName()
{
	return string("Ա��");
}
