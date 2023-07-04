#include<iostream>
#include<string>
using namespace std;


/**
实现通用的数组排序函数

规则：从大到小
算法：选择
测试 char数组、int数组
*/


// 交换元素
template<typename T>
void mySwap(T& a, T& b) {
	T temp = a;
	a = b;
	b = temp;
}

//排序算法
template<typename T>
void mySort(T arr[], int len) {
	for (int i = 0; i < len; i++)
	{
		int max = i; //认定最大值的下标
		for (int j = i + 1; j < len; j++)
		{
			// 认定的最大值  比  遍历出的数值要小，说明 j 下标的元素才是真正的最大值
			if (arr[max] < arr[j]) {
				max = j; //更新最大值下标
			}
		}
		if (max != i) {
			// 交换max和i的元素
			mySwap(arr[max], arr[i]);
		}
	}
}



// 打印数组模板
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