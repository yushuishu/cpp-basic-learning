/**
 * @Author ：谁书-ss
 * @Date   ：2023-07-09 20:10
 * @IDE    ：IntelliJ Clion
 * @Motto  ：ABC(Always Be Coding)
 * <p></p>
 * @Description ：string 赋值操作
 * <p></p>
 * string& operator=(const char* c);        char*类型字符串，赋值给当前的字符串
 * string& operator=(const string* s);      把字符串s 赋值给当前字符串
 * string& operator=(char c);               字符赋值给当前字符串
 * string& assign(const char* c);           把字符串s赋给当前的字符串
 * string& assign(const char* c, int n);    把字符串s的前几个字符赋给当前的字符串
 * string& assign(const string& s);         把字符串s赋给当前字符串
 * string& assign(int n, char c);           用n 个字符c 赋给当前字符串
 */
#include <iostream>

using namespace std;

#include <string>


void test() {
    string str1;
    str1 = "你好世界，hello world";
    cout << "str1 = " << str1 << endl;

    string str2;
    str2 = str1;
    cout << "str2 = " << str2 << endl;

    string str3;
    str3.assign("hello c++");
    cout << "str3 = " << str3 << endl;

    string str4;
    str4.assign("hello c++", 3);
    cout << "str4 = " << str4 << endl;

    string str5;
    str5.assign(3, 'a');
    cout << "str5 = " << str5 << endl;
}

int main() {
    test();
}