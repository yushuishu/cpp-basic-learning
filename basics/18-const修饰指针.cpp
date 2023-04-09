#include<iostream>
using namespace std;

/*
const修饰指针有三种情况：
1、const修饰指针 ---> 常量指针 (特点：指针指向可以更改，指向的值不可以更改)
2、const修饰常量 ---> 指针常量（特点：指针指向不可以更改，指向的值可以更改）
3、const即修饰指针，又修饰常量（特点：指向和值 都不可以更改）
*/
int main() {
	int a = 5;
	int b = 10;
	
	// 1、常量指针
	const int* p = &a;
	cout << "*p = " << *p << endl;
	// 修改指向的值，编辑器报错
	//*p = 100;

	// 修改指针指向，编辑器不报错，并打印输出查看结果
	p = &b;
	cout << "*p = " << *p << endl;



	// 2、指针常量
	int* const p2 = &a;
	cout << "*p2 = " << *p2 << endl;
	// 修改指针值，编辑器报错
	//p2 = &b;

	// 修改指针值
	*p2 = 100;
	cout << "a = " << a << endl;
	cout << "*p2 = " << *p2 << endl;



	//3、 即修饰指针 又修饰常量
	int m = 10;
	int n = 20;

	const int* const p3 = &m;

	cout << "p3" << *p3 << endl;

	// 编辑器报错
	//*p3 = 100;
	//p3 = &n;



}

