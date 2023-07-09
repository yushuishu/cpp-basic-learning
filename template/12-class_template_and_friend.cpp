#include<iostream>
#include<string>

using namespace std;


/**
类模板与友元
 
1、全局函数类内实现 直接在类内声明友元即可
2、全局函数类外实现 需要提前让编译器知道全局函数的存在
		printPerson2() 需要加一个空的参数列表修改为 printPerson2()<>
		实现代码的位置，需要放到类之前，而实现又用到了 Person 类，需要提前声明 Person 类模板
*/

template<class T1, class T2>
class Person;

// 全局函数类内声明，类外实现
template<class T1, class T2>
void printPerson2(Person<T1, T2> p) {
    cout << "姓名：" << p.m_name << "   年龄：" << p.m_age << endl;
}

template<class T1, class T2>
class Person {
    //全局函数类内实现
    friend void printPerson1(Person<T1, T2> p) {
        cout << "姓名：" << p.m_name << "   年龄：" << p.m_age << endl;
    }

    // 全局函数类内声明，类外实现
    friend void printPerson2<>(Person<T1, T2> p);

public:
    T1 m_name;
    T2 m_age;

    Person(T1 name, T2 age) {
        this->m_name = name;
        this->m_age = age;
    }
};


int main() {
    Person<string, int> p("刘备", 40);
    printPerson1(p);

    cout << "------------------------" << endl;

    printPerson2(p);
}