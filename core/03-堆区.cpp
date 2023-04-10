#include<iostream>
using namespace std;

/*
由程序员自己分配释放，若程序员不释放，程序结束时由操作系统回收
在 C++ 中，主要是利用 new 在堆区中开辟内存的。
*/


int* func()
{
	// new创建的在堆区，必须手动释放，才释放
	int* p = new int(10);
	// 返回局部变量的地址
	return p;
}
 
void test1()
{
	// new 一个数组
	int* arr = new int[10];
	for (size_t i = 0; i < 10; i++)
	{
		arr[i] = i + 1;
	}

	// 打印
	for (size_t i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}

	// 释放数组 delete arr 只释放一个数据
	delete[] arr;

}

int main() {
	int* p = func();
	cout << *p << endl;

	// 使用 delete 释放堆区内存
	delete p;

	// 引发了异常: 读取访问权限冲突。delete 释放内存之后，再次访问异常
	//cout << *p << endl;
	
}