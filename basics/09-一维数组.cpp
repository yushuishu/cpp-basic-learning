#include<iostream>
using namespace std;
#include <string.h>

/*
һά���鶨������õ���ʽ��
1���������� ������[���鳤��]
2���������� ������[���鳤��] = {ֵ1, ֵ2, ֵ3, ......}
3���������� ������[] = {ֵ1, ֵ2, ֵ3, ......}
*/
int main() {
	int arr1[3]{};
	arr1[0] = 10;
	arr1[1] = 11;
	int arr2[2] = { 1, 2 };
	int arr3[] = { 2, 3 };
	
	cout << "======================================================== arr1" << endl;
	for (size_t i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++)
	{
		cout << "arr1: " << arr1[i] << endl;
	}
	
	cout << "======================================================== arr2" << endl;
	for (size_t i = 0; i < sizeof(arr2) / sizeof(arr2[0]); i++)
	{
		cout << "arr2: " << arr2[i] << endl;
	}

	cout << "======================================================== arr3" << endl;
	for (size_t i = 0; i < sizeof(arr3) / sizeof(arr3[0]); i++)
	{
		cout << "arr3: " << arr3[i] << endl;
	}

}
