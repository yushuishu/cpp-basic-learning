#include<iostream>
using namespace std;

int main() {
	// 定义变量
	int a = 5;
	// 指针语法：数据类型 * 变量名;
	int* p;
	// 指针变量赋值，a的地址
	p = &a;
	cout << "&a = " << &a << endl;
	cout << "p = " << p << endl;

	// 指针的使用
	cout << "*p = " << *p << endl;
	// 通过指针 修改值
	*p = 10;
	cout << "a = " << a << endl;
	cout << "*p = " << *p << endl;

	cout << "\n==========================================================\n" << endl;

	// 指针所占内存空间: 32位 4字节；64位 8字节
	// sizeof(p) 或 sizeof(int *)
	cout << "sizeof(int *) " << sizeof(p) << endl;
	cout << "sizeof(int *) " << sizeof(int *) << endl;
	cout << "sizeof(float *) " << sizeof(float *) << endl;
	cout << "sizeof(double *) " << sizeof(double *) << endl;
	cout << "sizeof(char *) " << sizeof(char *) << endl;



}

