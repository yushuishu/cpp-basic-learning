#include<iostream>
#include<string>
using namespace std;

/**
1、如果函数模板和普通函数都可以实现，优先调用普通函数。
2、可以通过空模板参数列表来强制调用和函数模板
3、函数模板也可以发生重载
4、如果函数模板可以产生更好的匹配，优先调用函数模板。
*/




void myPrint(int a, int b) {
	cout << "调用普通函数" << endl;
}

template<typename T>
void myPrint(T a, T b) {
	cout << "调用模板函数" << endl;
}

template<typename T>
void myPrint(T a, T b, T c) {
	cout << "调用模板函数" << endl;
}




int main() {
	int a = 10;
	int b = 20;
	int c = 30;

	// 调用普通函数
	myPrint(a, b);

	// 通过空模板参数列表，强制调用函数模板
	myPrint<>(a, b);

	// 函数重载
	myPrint(a, b, c);

	// 这里函数不调用普通函数，而是调用了模板函数，因为类型可以更好的匹配
	// 普通函数可以做隐式转换，但是不如直接通过函数模板的 类型T 推导
	char c1 = 'a';
	char c2 = 'b';
	myPrint(c1, c2);

}