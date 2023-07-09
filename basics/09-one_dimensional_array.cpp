#include<iostream>

using namespace std;

#include <string.h>

/*
一维数组

一维数组定义数组得到方式：
1、数据类型 数组名[数组长度]
2、数据类型 数组名[数组长度] = {值1, 值2, 值3, ......}
3、数据类型 数组名[] = {值1, 值2, 值3, ......}
*/
int main() {
    int arr1[3]{};
    arr1[0] = 10;
    arr1[1] = 11;
    int arr2[2] = {1, 2};
    int arr3[] = {2, 3};

    cout << "======================================================== arr1" << endl;
    for (size_t i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++) {
        cout << "arr1: " << arr1[i] << endl;
    }

    cout << "======================================================== arr2" << endl;
    for (size_t i = 0; i < sizeof(arr2) / sizeof(arr2[0]); i++) {
        cout << "arr2: " << arr2[i] << endl;
    }

    cout << "======================================================== arr3" << endl;
    for (size_t i = 0; i < sizeof(arr3) / sizeof(arr3[0]); i++) {
        cout << "arr3: " << arr3[i] << endl;
    }

}