#include<iostream>
using namespace std;


// ���������Զ�Σ�
int max(int a, int b);
int max(int a, int b);

int main() {
	int a = 5;
	int b = 10;
	cout << "���ֵ��" << max(a, b) << endl;
}

// ����ֻ����һ��
int max(int a, int b)
{
	return a > b ? a : b;
}

