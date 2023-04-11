#include<iostream>
using namespace std;


// 引用函数的返回值，不要返回局部变量的引用
int& test1()
{
	int a = 10; // 局部变量存放在 栈区
	return a;
}

// 函数的调用可以作为 “左值”
int& test2()
{
	static int a = 20; //静态变量，存放在 全局区
	return a;
}

int main() {
	int& ref1 = test1();
	cout << "ref1 = " << ref1 << endl;
	cout << "ref1 = " << ref1 << endl;


	int& ref2 = test2();
	cout << "ref2 = " << ref2 << endl;
	cout << "ref2 = " << ref2 << endl;

	// 如果函数的返回值是引用，这个函数可以作为“左值”
	test2() = 100;
	cout << "ref2 = " << ref2 << endl;
	cout << "ref2 = " << ref2 << endl;

}