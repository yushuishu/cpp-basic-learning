#include<iostream>

using namespace std;

/*
二维数组

一维数组定义数组得到方式：
1、数据类型 数组名[行数][列数];
2、数据类型 数组名[行数][列数] = {{数据1, 数据2}, {数据3, 数据4}};
3、数据类型 数组名[行数][列数] = {数据1, 数据2, 数据3, 数据4};
4、数据类型 数组名[][列数] = {数据1, 数据2, 数据3, 数据4};
*/
int main() {
    int arr[2][3];
    arr[0][0] = 1;
    arr[0][1] = 2;
    arr[0][2] = 3;
    arr[1][0] = 4;
    arr[1][1] = 5;
    arr[1][2] = 6;

    // 二维数组大小 24: 因为二维数组是2行3列 共6个元素，一个int占4个字节，共24字节
    cout << "二维数组大小：" << sizeof(arr) << endl;
    cout << "二维数组第一个元素大小：" << sizeof(arr[0][0]) << endl;
    cout << "二维数组第一行大小：" << sizeof(arr[0]) << endl;
    cout << arr[0][0] << endl;
    cout << arr[0][1] << endl;
    cout << arr[0][2] << endl;
    cout << arr[1][0] << endl;
    cout << arr[1][1] << endl;
    cout << arr[1][2] << endl;

}