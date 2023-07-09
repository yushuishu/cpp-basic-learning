#include<iostream>

using namespace std;

/*
 引用

引用：给变量起别名
语法：数据类型 &别名 = 原名;
*/

int main() {
    int a = 10;

    int &b = a; // 引用在初始化后，不可以改变

    b = 20; // 这里是赋值操作，不是更改引用

    cout << a << endl;

    // 引用必须初始化，否则编辑器报错
    //int& b;



}