/**
 * @Author ：谁书-ss
 * @Date   ：2023-07-16 21:53
 * @IDE    ：IntelliJ Clion
 * @Motto  ：ABC(Always Be Coding)
 * <p></p>
 * @Description ：字符获取
 * <p></p>
 */

#include <iostream>

using namespace std;

#include <string>


void test() {
    string str1 = "hello";

    // 通过 [] 访问单个字符
    for (int i = 0; i < str1.size(); i++) {
        cout << str1[i] << "   ";
    }
    cout << endl;

    // 通过 at 访问单个字符
    for (int i = 0; i < str1.size(); i++) {
        cout << str1.at(i) << "   ";
    }
    cout << endl;


    // 通过 [] 修改单个字符
    str1[0] = 'x';
    cout << "str1 = " << str1 << endl;
    // 通过 at 修改单个字符
    str1.at(1) = 'y';
    cout << "str1 = " << str1 << endl;

}

void test2() {
    string str1 = "abcdefg";
    string subStr = str1.substr(1, 3);
    cout << "subStr = " << subStr << endl;

}


int main() {
    test();
    test2()
}