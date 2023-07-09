#include<iostream>

using namespace std;


/**
静态成员变量特点：
1、在编译阶段分配内存
2、类内声明，类外初始化
3、所有对象共享同一份数据

静态成员函数特点：
1、所有对象共享同一个函数
2、静态成员函数只能访问静态成员变量
*/
class Person {
public:
    int a;

    Person() {}

    ~Person() {

    }

    // 公共权限
    static int m;

    static void func1() {
        // 编译器报错，不能访问 非静态成员变量
        //a = 200;
        m = 100;

        cout << "static void func1" << endl;
    }

private:
    // 私有权限
    static int n;

    static void func2() {
        cout << "static void func2" << endl;
    }
};

int Person::m = 10;
int Person::n = 20;


int main() {
    Person person;
    // 变量访问
    cout << "m: " << person.m << endl;
    // 通过类名直接访问
    cout << "m: " << Person::m << endl;
    // 私有静态成员，不能通过类名直接访问，编译器直接报错
    //cout << "n: " << Person::n << endl;

    // 变量 静态函数
    person.func1();
    // 通过类名直接访问 静态函数
    Person::func1();
    // 私有静态成员函数，不能通过类名直接访问，编译器直接报错
    //cout << "n: " << Person::func2() << endl;

}