#include<iostream>
using namespace std;


// ���ú����ķ���ֵ����Ҫ���ؾֲ�����������
int& test1()
{
	int a = 10; // �ֲ���������� ջ��
	return a;
}

// �����ĵ��ÿ�����Ϊ ����ֵ��
int& test2()
{
	static int a = 20; //��̬����������� ȫ����
	return a;
}

int main() {
	int& ref1 = test1();
	cout << "ref1 = " << ref1 << endl;
	cout << "ref1 = " << ref1 << endl;


	int& ref2 = test2();
	cout << "ref2 = " << ref2 << endl;
	cout << "ref2 = " << ref2 << endl;

	// ��������ķ���ֵ�����ã��������������Ϊ����ֵ��
	test2() = 100;
	cout << "ref2 = " << ref2 << endl;
	cout << "ref2 = " << ref2 << endl;

}