#include<iostream>
using namespace std;
#include "swap.h"

/*
����������ָ�룬���ú�������ָ��
*/
int main() {
	int a = 10;
	int b = 20;

	swap2(&a, &b);

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}

