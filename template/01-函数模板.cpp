#include<iostream>
#include<string>
using namespace std;


/**
函数模板：
	声明一个模板，告诉编译器后面代码中紧跟着的 T 不要报错，T 是通用数据类型
*/
template<typename T>
void mySwap(T &a, T &b) {
	T temp = a;
	a = b;
	b = temp;
}


int main() {
	int a = 10;
	int b = 20;
	
	// 1、自动类型推导
	mySwap(a, b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	// 2、显示指定类型推导
	mySwap<int>(a, b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	cout << "----------------------------------" << endl;

	double x = 1.1;
	double y = 2.2;
	mySwap(x, y);
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
}