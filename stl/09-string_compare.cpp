/**
 * @Author ：谁书-ss
 * @Date   ：2023-07-16 21:51
 * @IDE    ：IntelliJ Clion
 * @Motto  ：ABC(Always Be Coding)
 * <p></p>
 * @Description ：字符串比较
 * <p></p>
 */

#include <iostream>

using namespace std;

#include <string>

int main() {
    string str1 = "abc";
    string str2 = "abc";
    if (str1.compare(str2) == 0) {
        cout << "str1 = str2" << endl;
    } else {
        cout << "str1 != str2" << endl;
    }


    str1 = "xbc";
    cout << "str1.compare(str2) = " << str1.compare(str2) << endl;
    cout << "str2.compare(str1) = " << str2.compare(str1) << endl;


}