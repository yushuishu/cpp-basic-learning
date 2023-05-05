#include<iostream>
using namespace std;

/*
�Ӻ����������
*/



class  Person
{
public:
	int m_a;
	int m_b;

	// 1����Ա�������� + 
	/*Person operator+(Person& p)
	{
		Person temp;
		temp.m_a = this->m_a + p.m_a;
		temp.m_b = this->m_b + p.m_b;
		return temp;
	}*/

private:

};

// 2��ȫ�ֺ������� +
Person operator+(Person& p1, Person& p2)
{
	Person temp;
	temp.m_a = p1.m_a + p2.m_a;
	temp.m_b = p1.m_b + p2.m_b;
	return temp;
}


// ��������ص� ��������
Person operator+(Person& p, int num)
{
	Person temp;
	temp.m_a = p.m_a + num;
	temp.m_b = p.m_b + num;
	return temp;
}



void test() 
{
	Person p1;
	p1.m_a = 5;
	p1.m_b = 10;

	Person p2;
	p2.m_a = 20;
	p2.m_b = 2;

	// ��Ա�������أ����ʵ���
	//Person p3 = p1.operator+(p2);

	// ȫ�ֺ��������ʵ���
	//Person p3 = operator+(p1, p2);

	// ͳһ��Ϊ�����ַ�ʽ
	Person p3 = p1 + p2;


	cout << "p3.m_a��" << p3.m_a << endl;
	cout << "p3.m_b��" << p3.m_b << endl;

	// ��������ص� ��������
	Person p4 = p3 + 10;
	cout << "p3.m_a��" << p4.m_a << endl;
	cout << "p3.m_b��" << p4.m_b << endl;

}

int main() {
	test();
}