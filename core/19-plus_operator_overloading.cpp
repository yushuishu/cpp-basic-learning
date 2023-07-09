#include<iostream>

using namespace std;

/*
加号运算符重载
*/



class Person {
public:
    int m_a;
    int m_b;

    // 1、成员函数重载 +
    /*Person operator+(Person& p)
    {
        Person temp;
        temp.m_a = this->m_a + p.m_a;
        temp.m_b = this->m_b + p.m_b;
        return temp;
    }*/

private:

};

// 2、全局函数重载 +
Person operator+(Person &p1, Person &p2) {
    Person temp;
    temp.m_a = p1.m_a + p2.m_a;
    temp.m_b = p1.m_b + p2.m_b;
    return temp;
}


// 运算符重载的 函数重载
Person operator+(Person &p, int num) {
    Person temp;
    temp.m_a = p.m_a + num;
    temp.m_b = p.m_b + num;
    return temp;
}


void test() {
    Person p1;
    p1.m_a = 5;
    p1.m_b = 10;

    Person p2;
    p2.m_a = 20;
    p2.m_b = 2;

    // 成员函数重载，本质调用
    //Person p3 = p1.operator+(p2);

    // 全局函数，本质调用
    //Person p3 = operator+(p1, p2);

    // 统一简化为，这种方式
    Person p3 = p1 + p2;


    cout << "p3.m_a：" << p3.m_a << endl;
    cout << "p3.m_b：" << p3.m_b << endl;

    // 运算符重载的 函数重载
    Person p4 = p3 + 10;
    cout << "p3.m_a：" << p4.m_a << endl;
    cout << "p3.m_b：" << p4.m_b << endl;

}

int main() {
    test();
}