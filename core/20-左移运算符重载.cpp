#include<iostream>
using namespace std;

class  Person
{
	// ����ֶ�������˽�еģ�����Ҫʹ����Ԫ
	friend ostream& operator<<(ostream& cout, Person& p);
public:
	int m_a;
	int m_b;

	// 1����Ա�������� <<
	// p.operator<<(cout) ��  p << cout
	// ����ʹ�ó�Ա����ȥ���� << ���������Ϊ�޷�ʵ�� cout ����࣬ ����ֻ����ȫ�ֺ������� ���������
	/*void operator<<(Person &p)
	{

	}*/

private:

};

// ȫ�ֺ������� <<
// cout ȫ��ֻ����һ�����������ù���
// ����ֵ ostream& �Ϳ�����ʽ����
ostream& operator<<(ostream &cout, Person& p)
{
	cout << "p.m_a��" << p.m_a << "   p.m_b��" << p.m_b << endl;

	return cout;
}


void test()
{
	Person p1;
	p1.m_a = 10;
	p1.m_b = 20;

	// ֱ�����p1 ����������ֶ�ֵ��
	// <<���غ����ķ���ֵΪ ostream& �Ϳ�����ʽ����
	cout << p1 << "7788" << endl;

}

int main() {
	test();
}