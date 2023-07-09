#include<iostream>

using namespace std;

/*
构造函数和析构函数


构造函数：主要作用于创建对象时为对象的成员属性赋值，构造函数由编译器自动调用，无需手动调用。
析构函数：主要作用于对象销毁前系统自动调用，执行一些清理工作。

构造函数语法：类名(){}
1、构造函数没有返回值，也不写void
2、函数名称与类名相同
3、构造函数可以有参数，因此可以发生重载
4、程序在调用对象的时候自动调用构造，无需手动调用，而且只会调用一次

析构函数语法：~类名(){}
1、析构函数没有返回值，也不写void
2、函数名称与类名相同，在名称前加上符号 ~
3、析构函数不可以有参数，因此不可以发生重载
4、程序在对象销毁前自动调用析构函数，无需手动调用，而且只会调用一次，所以可以用于 释放内存 操作
*/

class MyClass {
public:
    int num;

    MyClass();

    ~MyClass();

    // 有参构造
    MyClass(int a);

    // 拷贝构造
    MyClass(const MyClass &p);

private:

};

// :: 类内声明，类外实现
MyClass::MyClass() {
    cout << "构造函数的调用" << endl;
}

MyClass::~MyClass() {
    cout << "析构函数的调用" << endl;
}

MyClass::MyClass(int a) {
    num = a;
    cout << "有参构造函数的调用" << endl;
}

MyClass::MyClass(const MyClass &p) {
    num = p.num;
}

int main() {
    // 注意：调用“无参构造”时，不要写括号，因为编译器会认为是 函数声明
    // 无参构造 调用
    MyClass myClass1;
    // 有参构造 调用
    MyClass myClass2(10);
    // 拷贝构造 调用
    MyClass myClass3(myClass2);
    // 隐式转换法，相当于 MyClass myClass4 = MyClass(20);
    MyClass myClass4 = 20;

    cout << "myClass3 的 num ：" << myClass3.num << endl;

}