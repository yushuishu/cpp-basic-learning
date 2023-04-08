#include<iostream>
using namespace std;


void swap(int num1, int num2) {
	cout << "交换前 num1 = " << num1 << endl;
	cout << "交换前 num2 = " << num2 << endl;
	int temp = num1;
	num1 = num2;
	num2 = temp;
	cout << "交换后 num1 = " << num1 << endl;
	cout << "交换后 num2 = " << num2 << endl;
}

int main() {
	int a = 5;
	int b = 10;
	swap(a, b);
	
	cout << "\n执行交换函数之后 a = " << a << endl;
	cout << "执行交换函数之后 b = " << b << endl;
}

