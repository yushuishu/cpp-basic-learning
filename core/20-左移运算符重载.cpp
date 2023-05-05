#include<iostream>
using namespace std;

class  Person
{
	// 如果字段属性是私有的，就需要使用友元
	friend ostream& operator<<(ostream& cout, Person& p);
public:
	int m_a;
	int m_b;

	// 1、成员函数重载 <<
	// p.operator<<(cout) 简化  p << cout
	// 不会使用成员函数去重载 << 运算符，因为无法实现 cout 在左侧， 所以只能用全局函数重载 左移运算符
	/*void operator<<(Person &p)
	{

	}*/

private:

};

// 全局函数重载 <<
// cout 全局只能有一个，必须引用过来
// 返回值 ostream& 就可以链式调用
ostream& operator<<(ostream &cout, Person& p)
{
	cout << "p.m_a：" << p.m_a << "   p.m_b：" << p.m_b << endl;

	return cout;
}


void test()
{
	Person p1;
	p1.m_a = 10;
	p1.m_b = 20;

	// 直接输出p1 就输出所有字段值，
	// <<重载函数的返回值为 ostream& 就可以链式调用
	cout << p1 << "7788" << endl;

}

int main() {
	test();
}