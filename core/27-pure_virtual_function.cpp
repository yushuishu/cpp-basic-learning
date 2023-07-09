#include<iostream>
#include<string>

using namespace std;

/**
纯虚函数

纯虚函数和抽象类：
	基类的方法一般被子类实现函数的逻辑，所有基类的虚函数还可以简写为；virtual int getResult() = 0;
	纯虚函数相当于java中的抽象方法

*/

// 基类
class Base {
public:
    // 纯虚函数
    // 只要有一个纯虚函数，这个类称为抽象类，抽象类特点：1、无法实例化对象，2、抽象类的子类，必须重写父类中的纯虚函数，否则也属于抽象类
    virtual int getResult() = 0;

    int num1;
    int num2;
};


class Son : public Base {
public:
    int getResult() {

    }
};

int main() {
    //Base b;      // 抽象类无法实例化对象
    //new Base;    // 抽象类无法实例化对象


    //必须重写父类中的纯虚函数，否则也属于抽象类
    Son s;
}