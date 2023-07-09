#include<iostream>

using namespace std;

/*
 * 函数重载注意事项
 * */

// 1、函数重载参数是引用
void test(int &a) {
    cout << "test(int &a)" << endl;
}

void test(const int &a) {
    cout << "test(const int& a)" << endl;
}

// 2、函数重载碰到 参数默认值
void test2(int a) {
    cout << "test2(int a)" << endl;
}

void test2(int a, int b = 10) {
    cout << "test2(int a = 10)" << endl;
}


int main() {
    int a = 10;
    test(a);
    cout << "--------------------------------------" << endl;
    test(10);

    cout << "--------------------------------------" << endl;
    // 当函数重载碰到默认值参数，出现二义性，报错
    //test2(10);


}