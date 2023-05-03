#include<iostream>
using namespace std;


class Person
{
	// friend 修饰，可以访问私有成员
	friend void func1(Person* person);
public:
	int a;

	Person() {
		a = 100;
		b = 200;
	}
	~Person() {}

private:
	int b;
};

// 全局函数
void func1(Person* person) {
	cout << "a： " << person->a << endl;

	// 声明式的方式使用 friend 修饰函数，就可以输出 person->b
	cout << "b： " << person->b << endl;
}

void func2() {
	Person person;
	func1(&person);
}



int main() {
	func2();
}