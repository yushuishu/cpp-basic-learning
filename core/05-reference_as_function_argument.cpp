#include<iostream>

using namespace std;

/*
 * 引用做函数参数
 * */

// 交换
void swap1(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// 交换
void swap2(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int a = 10;
    int b = 20;

    swap1(&a, &b);
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    swap2(a, b);
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
}