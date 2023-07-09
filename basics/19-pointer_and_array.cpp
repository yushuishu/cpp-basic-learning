#include<iostream>

using namespace std;

/*
 * 指针和数组
 * */
int main() {
    int arr[5] = {1, 2, 3, 4, 5};

    cout << "第一个元素为：" << arr[0] << endl;
    // arr就是数组首地址
    int *p = arr;
    cout << "指针访问第一个元素：" << *p << endl;
    // 指针往后偏移4个字节
    p++;
    cout << "指针访问第二个元素：" << *p << endl;


    // 可以使用 for 循环遍历数组
    cout << "===============================  for 循环遍历数组" << endl;
    int *p2 = arr;
    for (size_t i = 0; i < 5; i++) {
        cout << "for循环遍历元素：" << *p2 << endl;
        p2++;
    }
}
