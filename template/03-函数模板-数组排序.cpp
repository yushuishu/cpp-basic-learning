#include<iostream>
#include<string>
using namespace std;


/**
ʵ��ͨ�õ�����������

���򣺴Ӵ�С
�㷨��ѡ��
���� char���顢int����
*/


// ����Ԫ��
template<typename T>
void mySwap(T& a, T& b) {
	T temp = a;
	a = b;
	b = temp;
}

//�����㷨
template<typename T>
void mySort(T arr[], int len) {
	for (int i = 0; i < len; i++)
	{
		int max = i; //�϶����ֵ���±�
		for (int j = i + 1; j < len; j++)
		{
			// �϶������ֵ  ��  ����������ֵҪС��˵�� j �±��Ԫ�ز������������ֵ
			if (arr[max] < arr[j]) {
				max = j; //�������ֵ�±�
			}
		}
		if (max != i) {
			// ����max��i��Ԫ��
			mySwap(arr[max], arr[i]);
		}
	}
}



// ��ӡ����ģ��
template<typename T>
void printArray(T arr[], int len) {
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}


int main() {
	char charArr[] = "abcde";
	int num = sizeof(charArr) / sizeof(char);
	mySort(charArr, num);
	printArray(charArr, num);

	cout << "--------------------------------------------" << endl;

	int intArr[] = {9, 3, 6, 7, 2, 8};
	int num2 = sizeof(intArr) / sizeof(int);
	mySort(intArr, num2);
	printArray(intArr, num2);
}