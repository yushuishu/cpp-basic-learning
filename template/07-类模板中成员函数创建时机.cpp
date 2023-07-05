#include<iostream>
#include<string>
using namespace std;

/**
类模板中成员函数在调用时才去创建
*/

class Person1 {
public:
	void printPerson1() {
		cout << "printPerson1" << endl;
	}
};

class Person2 {
public:
	void printPerson2() {
		cout << "printPerson2" << endl;
	}
};


template<class T>
class MyClass {
public:
	T obj;

	// 类模板中的成员函数
	void func1() {
		obj.printPerson1();
	}
	void func2() {
		obj.printPerson2();
	}
};


int main() {
	MyClass<Person1> m1;
	m1.func1();
	//m1.func2();  // 运行报错

	cout << "--------------------------" << endl;

	MyClass<Person2> m2;
	//m2.func1(); // 运行报错
	m2.func2();

}