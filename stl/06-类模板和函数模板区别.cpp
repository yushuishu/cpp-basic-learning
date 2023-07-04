#include<iostream>
#include<string>
using namespace std;


/**
区别：
	1、类模板没有自动类型推导
	2、类模板在模板参数列表中可以有默认参数
*/


template<class NameType, class AgeType = int>
class Person
{
public:
	NameType m_name;
	AgeType m_age;
	Person(NameType name, AgeType age) {
		this->m_name = name;
		this->m_age = age;
	}
	void printPerson() {
		cout << "name = " << this->m_name << "   age = " << this->m_age << endl;
	}
};



int main() {
	//Person p1("刘备", 35);    //错误，不能自动类型推导
	Person<string, int> p1("刘备", 35);


	// 模板参数列表中可以有默认参数，这里就可以省略指定类型
	Person<string> p2("张飞", 30);
}