#include<iostream>
#include<string>
using namespace std;


/**
����
	1����ģ��û���Զ������Ƶ�
	2����ģ����ģ������б��п�����Ĭ�ϲ���
*/


template<class NameType, class AgeType = int>
class Person
{
public:
	NameType m_name;
	AgeType m_age;
	Person(NameType name, AgeType age) {
		this->m_name = name;
		this->m_age = age;
	}
	void printPerson() {
		cout << "name = " << this->m_name << "   age = " << this->m_age << endl;
	}
};



int main() {
	//Person p1("����", 35);    //���󣬲����Զ������Ƶ�
	Person<string, int> p1("����", 35);


	// ģ������б��п�����Ĭ�ϲ���������Ϳ���ʡ��ָ������
	Person<string> p2("�ŷ�", 30);
}