#include<iostream>
using namespace std;

int main() {
	// �������
	int a = 5;
	// ָ���﷨���������� * ������;
	int* p;
	// ָ�������ֵ��a�ĵ�ַ
	p = &a;
	cout << "&a = " << &a << endl;
	cout << "p = " << p << endl;

	// ָ���ʹ��
	cout << "*p = " << *p << endl;
	// ͨ��ָ�� �޸�ֵ
	*p = 10;
	cout << "a = " << a << endl;
	cout << "*p = " << *p << endl;

	cout << "\n==========================================================\n" << endl;

	// ָ����ռ�ڴ�ռ�: 32λ 4�ֽڣ�64λ 8�ֽ�
	// sizeof(p) �� sizeof(int *)
	cout << "sizeof(int *) " << sizeof(p) << endl;
	cout << "sizeof(int *) " << sizeof(int *) << endl;
	cout << "sizeof(float *) " << sizeof(float *) << endl;
	cout << "sizeof(double *) " << sizeof(double *) << endl;
	cout << "sizeof(char *) " << sizeof(char *) << endl;



}

