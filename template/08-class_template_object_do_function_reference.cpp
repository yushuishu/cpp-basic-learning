#include<iostream>
#include<string>

using namespace std;

/**
类模板对象做函数参考

类模板实例化出的对象，向函数传参的方式：
	1、指定传入的类型：直接显示对象的数据类型
	2、参数模板化：将对象中的参数变为模板进行传递
	3、整个类模板化：将这个对象类型 模板化进行传递
*/


template<class T1, class T2>
class Person {
public:
    T1 m_name;
    T2 m_age;

    Person(T1 name, T2 age) {
        this->m_name = name;
        this->m_age = age;
    }

    void printPerson() {
        cout << "姓名：" << this->m_name << "   年龄：" << this->m_age << endl;
    }

};


// 1、指定传入的类型
void printPerson1(Person<string, int> &p) {
    p.printPerson();
}

// 2、参数模板化
template<class T1, class T2>
void printPerson2(Person<T1, T2> &p) {
    cout << "T1 的类型：" << typeid(T1).name() << endl;
    cout << "T2 的类型：" << typeid(T2).name() << endl;
    p.printPerson();
}

// 3、整个类模板化
template<class T>
void printPerson3(T &p) {
    cout << "T 的类型：" << typeid(T).name() << endl;
    p.printPerson();
}


int main() {
    Person<string, int> p("刘备", 35);

    // 1、指定传入的类型
    printPerson1(p);
    // 2、参数模板化
    printPerson2(p);
    // 3、整个类模板化
    printPerson3(p);

}