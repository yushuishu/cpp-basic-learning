#include<iostream>

using namespace std;

#include "swap.h"

/*
函数分文件编写


1、在编辑器的 “头文件”下创建 .h 结尾的文件，声明函数（类比java接口中的方法）
2、在编辑器的 “源文件”下创建 .cpp 代码文件，定义函数（类比java实现接口，重写方法）

注意swap函数 #include 部分，是在 头文件中的，源文件不需要
*/

int main() {
    int a = 5;
    int b = 10;
    swap(a, b);

    cout << "\n执行交换函数之后 a = " << a << endl;
    cout << "执行交换函数之后 b = " << b << endl;
}
