#include<iostream>
using namespace std;

/*
�ɳ���Ա�Լ������ͷţ�������Ա���ͷţ��������ʱ�ɲ���ϵͳ����
�� C++ �У���Ҫ������ new �ڶ����п����ڴ�ġ�
*/


int* func()
{
	// new�������ڶ����������ֶ��ͷţ����ͷ�
	int* p = new int(10);
	// ���ؾֲ������ĵ�ַ
	return p;
}
 
void test1()
{
	// new һ������
	int* arr = new int[10];
	for (size_t i = 0; i < 10; i++)
	{
		arr[i] = i + 1;
	}

	// ��ӡ
	for (size_t i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}

	// �ͷ����� delete arr ֻ�ͷ�һ������
	delete[] arr;

}

int main() {
	int* p = func();
	cout << *p << endl;

	// ʹ�� delete �ͷŶ����ڴ�
	delete p;

	// �������쳣: ��ȡ����Ȩ�޳�ͻ��delete �ͷ��ڴ�֮���ٴη����쳣
	//cout << *p << endl;
	
}