#include<iostream>

using namespace std;

#include "swap.h"

/*
 * 指针和函数
 *
 * 函数参数是指针，调用函数传递指针
 * */
int main() {
    int a = 10;
    int b = 20;

    swap2(&a, &b);

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}
