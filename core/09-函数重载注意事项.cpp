#include<iostream>
using namespace std;



// 1���������ز���������
void test(int &a)
{
	cout << "test(int &a)" << endl;
}
void test(const int& a)
{
	cout << "test(const int& a)" << endl;
}

// 2�������������� ����Ĭ��ֵ
void test2(int a)
{
	cout << "test2(int a)" << endl;
}
void test2(int a, int b = 10)
{
	cout << "test2(int a = 10)" << endl;
}


int main() {
	int a = 10;
	test(a);
	cout << "--------------------------------------" << endl;
	test(10);

	cout << "--------------------------------------" << endl;
	// ��������������Ĭ��ֵ���������ֶ����ԣ�����
	//test2(10);


}