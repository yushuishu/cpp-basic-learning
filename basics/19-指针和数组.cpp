#include<iostream>
using namespace std;


int main() {
	int arr[5] = { 1, 2, 3, 4, 5 };

	cout << "��һ��Ԫ��Ϊ��" << arr[0] << endl;
	// arr���������׵�ַ
	int* p = arr;
	cout << "ָ����ʵ�һ��Ԫ�أ�" << *p << endl;
	// ָ������ƫ��4���ֽ�
	p++;
	cout << "ָ����ʵڶ���Ԫ�أ�" << *p << endl;


	// ����ʹ�� for ѭ����������
	cout << "===============================  for ѭ����������" << endl;
	int* p2 = arr;
	for (size_t i = 0; i < 5; i++)
	{
		cout << "forѭ������Ԫ�أ�" << *p2 << endl;
		p2++;
	}
}

