#include "swap.h"


void swap(int num1, int num2) {
	cout << "交换前 num1 = " << num1 << endl;
	cout << "交换前 num2 = " << num2 << endl;
	int temp = num1;
	num1 = num2;
	num2 = temp;
	cout << "交换后 num1 = " << num1 << endl;
	cout << "交换后 num2 = " << num2 << endl;
}

void swap2(int *p1, int *p2) {
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}