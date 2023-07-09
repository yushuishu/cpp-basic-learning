#include<iostream>

using namespace std;

/*

 流程结构

和java运算一样：

if else
三目运算
switch
while
for
goto
*/
int main() {
    // if else
    cout << "========================================= if else ===================================" << endl;
    int a = 10;
    if (a > 5) {
        cout << "大于5" << endl;
    } else if (a > 10) {
        cout << "大于10" << endl;
    } else {
        cout << "小于5" << endl;
    }

    // 三目运算
    cout << "========================================= 三目运算 ===================================" << endl;
    cout << (a > 10 ? a : 10) << endl;

    // switch
    cout << "========================================= switch ===================================" << endl;
    int score = 65;
    switch (score / 10) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            cout << "不及格" << endl;
            break;
        case 6:
        case 7:
            cout << "及格" << endl;
            break;
        case 8:
            cout << "优秀" << endl;
            break;
        case 9:
            cout << "非常优秀" << endl;
            break;
        default:
            cout << "分数不符合要求" << endl;
            break;
    }


    // while
    cout << "========================================= while ===================================" << endl;
    int flag = 1;
    while (true) {
        if (flag <= 5) {
            cout << "while循环第：" << flag << " 次" << endl;
            flag++;
            continue;
        }
        break;
    }


    // for
    cout << "========================================= for ===================================" << endl;

    for (size_t i = 0; i < 5; i++) {
        cout << "for循环第：" << i << " 次" << endl;
    }

    // goto
    cout << "========================================= goto ===================================" << endl;
    goto FLAG;
    cout << "goto之后第一行代码" << endl;
    // 标记
    FLAG:
    cout << "goto之后第二行代码" << endl;


    system("pause");
    return 0;
}