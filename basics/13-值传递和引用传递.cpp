#include<iostream>
using namespace std;


void swap(int num1, int num2) {
	cout << "����ǰ num1 = " << num1 << endl;
	cout << "����ǰ num2 = " << num2 << endl;
	int temp = num1;
	num1 = num2;
	num2 = temp;
	cout << "������ num1 = " << num1 << endl;
	cout << "������ num2 = " << num2 << endl;
}

int main() {
	int a = 5;
	int b = 10;
	swap(a, b);
	
	cout << "\nִ�н�������֮�� a = " << a << endl;
	cout << "ִ�н�������֮�� b = " << b << endl;
}

