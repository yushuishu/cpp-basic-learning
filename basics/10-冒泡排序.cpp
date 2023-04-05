#include<iostream>
using namespace std;

/*
Ã°ÅÝÅÅÐò£ºÉýÐò
*/
int main() {
	int arr[] = { 10, 5, 2, 7, 1, 8, 4, 3, 6 };
	int length = sizeof(arr) / sizeof(arr[0]);
	for (size_t i = 0; i < length - 1; i++)
	{
		bool flag = false;
		for (size_t j =  0; j < length - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				flag = true;
			}
		}
		if (flag == false)
		{
			break;
		}
	}

	for (size_t i = 0; i < length - 1; i++) {
		cout << arr[i] << endl;
	}

}
