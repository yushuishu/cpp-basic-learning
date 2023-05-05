#include<iostream>
using namespace std;



class  Person
{
public:
	int *my_age;

	Person(int age)
	{
		// ������Ҫ���������ͷ��ڴ�
		my_age = new int(age);
	}

	~Person()
	{
		if (my_age != NULL)
		{
			delete my_age;
			my_age = NULL;
		}
	}

	// ���ظ�ֵ����� =
	Person& operator=(Person &p)
	{
		// �������ṩ��ǳ����
		//my_age = p.my_age;

		// Ӧ�����ж��Ƿ��������ڶ���������У�Ӧ�����ͷŸɾ��������
		if (my_age !=NULL)
		{
			delete my_age;
			my_age = NULL;
		}
		my_age = new int(*p.my_age);
		return *this;
	}

private:

};


void test()
{
	Person p1(10);
	Person p2(20);
	
	cout << "p1���䣺" << *p1.my_age << endl;
	cout << "p2���䣺" << *p2.my_age << endl;

	// ��ֵ���������������ͷ��ڴ棬�����ظ��ͷ��ڴ棩������ֱ��ʹ�� = ��ֵ����ʱ Ϊǳ����
	// ʹ�� ���ظ�ֵ���� ֮����������
	p2 = p1;
	cout << "p2���䣺" << *p2.my_age << endl;

	cout << "=============================" << endl;
	// ������ֵ�������ظ�ֵ����������ֵ���뷵���������򱨴�
	Person p3(30);
	p3 = p2 = p1;
	cout << "p1���䣺" << *p1.my_age << endl;
	cout << "p2���䣺" << *p2.my_age << endl;
	cout << "p3���䣺" << *p3.my_age << endl;
}

int main() {
	test();
}