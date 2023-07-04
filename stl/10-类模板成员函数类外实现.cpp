#include<iostream>
#include<string>
using namespace std;


/**


*/


template<class T1, class T2>
class Person
{
public:
	T1 m_name;
	T2 m_age;
	Person(T1 name, T2 age);
	/*{
		this->m_name = name;
		this->m_age = age;
	}*/

		void printPerson();
	/*{
		cout << "name = " << this->m_name << "   age = " << this->m_age << endl;
	}*/
};

// 构造函数类外实现
template<class T1, class T2>
Person<T1,T2>::Person(T1 name, T2 age)
{
	this->m_name = name;
	this->m_age = age;
}
// 成员函数类外实现
template<class T1, class T2>
void Person<T1, T2>::printPerson()
{
	cout << "name = " << this->m_name << "   age = " << this->m_age << endl;
}



int main() {

}