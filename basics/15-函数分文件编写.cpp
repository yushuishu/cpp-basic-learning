#include<iostream>
using namespace std;
#include "swap.h"

/*
1���ڱ༭���� ��ͷ�ļ����´��� .h ��β���ļ����������������java�ӿ��еķ�����
2���ڱ༭���� ��Դ�ļ����´��� .cpp �����ļ������庯�������javaʵ�ֽӿڣ���д������

ע��swap���� #include ���֣����� ͷ�ļ��еģ�Դ�ļ�����Ҫ
*/

int main() {
	int a = 5;
	int b = 10;
	swap(a, b);

	cout << "\nִ�н�������֮�� a = " << a << endl;
	cout << "ִ�н�������֮�� b = " << b << endl;
}

