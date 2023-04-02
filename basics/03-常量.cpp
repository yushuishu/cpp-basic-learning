#include<iostream>
using namespace std;

// 1、宏常量定义格式：#define 常量名 值
#define day 7

int main() {
	cout << "一周 " << day << " 天" << endl;

	// 2、const修饰的变量
	const int month = 12;
	cout << "一年有 " << month << " 个月份" << endl;

	system("pause");

	return 0;
}
