#include<iostream>
using namespace std;

/*
ջ������ע�������Ҫ���ؾֲ������ĵ�ַ
ջ���������ɱ��������ٺ��ͷ�
*/


int* func()
{
	// �ֲ����� �����ջ����ջ���������ں���ִ����֮���Զ��ͷ�
	int a = 10;
	// ���ؾֲ������ĵ�ַ
	return &a;
}

int main() {
	int *p = func();
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;

}