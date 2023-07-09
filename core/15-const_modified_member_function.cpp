#include<iostream>

using namespace std;


/*
 * const修饰成员函数
 * */

class Person {
public:
    int a;
    // mutable 特殊变量，即使在常函数中，也可以修改这个值
    mutable int b;

    Person() {}

    ~Person() {}

    // this指针的本质 是指针常量， 指针的指向是不可以修改的
    // const Person* const this;
    // 在成员函数后面加的 const ，修饰的是 this指向，值不可以修改
    void shwoPerson() const {
        // this->a = 100;

        // 特殊变量，可以修改
        this->b = 200;
    }

    void func1() {}

private:

};


int main() {
    Person person;
    person.shwoPerson();

    // 常对象
    const Person p;
    //p.a = 500; // 报错，不可以修改
    p.b = 600; // 特殊变量，常对象下，可以修改

    p.shwoPerson();
    //p.func1(); // 常对象，不可以调用普通函数，因为普通函数可以修改变量

}