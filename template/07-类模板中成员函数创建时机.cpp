#include<iostream>
#include<string>
using namespace std;

/**
��ģ���г�Ա�����ڵ���ʱ��ȥ����
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

	// ��ģ���еĳ�Ա����
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
	//m1.func2();  // ���б���

	cout << "--------------------------" << endl;

	MyClass<Person2> m2;
	//m2.func1(); // ���б���
	m2.func2();

}