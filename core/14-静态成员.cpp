#include<iostream>
using namespace std;


/**
��̬��Ա�����ص㣺
1���ڱ���׶η����ڴ�
2�����������������ʼ��
3�����ж�����ͬһ������

��̬��Ա�����ص㣺
1�����ж�����ͬһ������
2����̬��Ա����ֻ�ܷ��ʾ�̬��Ա����
*/
class Person
{
public:
	int a;

	Person() {}
	~Person() {

	}
	// ����Ȩ��
	static int m;

	static void func1() {
		// �������������ܷ��� �Ǿ�̬��Ա����
		//a = 200;
		m = 100;

		cout << "static void func1" << endl;
	}
private:
	// ˽��Ȩ��
	static int n;
	static void func2() {
		cout << "static void func2" << endl;
	}
};

int Person::m = 10;
int Person::n = 20;


int main() {
	Person person;
	// ��������
	cout << "m: " << person.m << endl;
	// ͨ������ֱ�ӷ���
	cout << "m: " << Person::m << endl;
	// ˽�о�̬��Ա������ͨ������ֱ�ӷ��ʣ�������ֱ�ӱ���
	//cout << "n: " << Person::n << endl;

	// ���� ��̬����
	person.func1();
	// ͨ������ֱ�ӷ��� ��̬����
	Person::func1();
	// ˽�о�̬��Ա����������ͨ������ֱ�ӷ��ʣ�������ֱ�ӱ���
	//cout << "n: " << Person::func2() << endl;

}