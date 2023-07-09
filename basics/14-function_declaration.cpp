#include<iostream>

using namespace std;

/*
 * 函数声明
 * */

// 声明（可以多次）
int max(int a, int b);

int max(int a, int b);

int main() {
    int a = 5;
    int b = 10;
    cout << "最大值：" << max(a, b) << endl;
}

// 定义只能有一次
int max(int a, int b) {
    return a > b ? a : b;
}
