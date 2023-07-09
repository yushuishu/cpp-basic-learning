#include "swap.h"


/*
 * 交换数据函数，函数实现
 * */

void swap(int num1, int num2) {
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;
    int temp = num1;
    num1 = num2;
    num2 = temp;
    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;
}

void swap2(int *p1, int *p2) {
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
