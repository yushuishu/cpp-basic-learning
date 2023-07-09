/**
 * @Author ：谁书-ss
 * @Date   ：2023-07-09 20:23
 * @IDE    ：IntelliJ Clion
 * @Motto  ：ABC(Always Be Coding)
 * <p></p>
 * @Description ：string 拼接
 * <p></p>
 * string& operator+=(const char* c);                   重载+- 操作符
 * string& operator+=(const char c);                    重载+- 操作符
 * string& operator+=(const string& str);               重载+- 操作符
 * string& append(const char* c);                       把字符串c 连接到当前字符串结尾
 * string& append(const char* c, int n);                把字符c 的前几个字符链接到当前字符串结尾
 * string& append(const string& str);                   同 operator+=(const string& str)
 * string& append(const string& str, int pos, int n);   字符串str 中从pos 开始的n 个字符链接到当前字符串结尾
 */
#include <iostream>

using namespace std;

#include <string>


void test() {
    string str1 = "学习";
    str1 += "C++";
    cout << "str1 = " << str1 << endl;
    str1 += " 和 QT";
    cout << "str1 = " << str1 << endl;

    string str2;
    str2 += str1;
    cout << "str2 = " << str2 << endl;

    string str3;
    str3.append("学习java");
    cout << "str3 = " << str3 << endl;
    str3.append(" 和 SpringBoot");
    cout << "str3 = " << str3 << endl;
    str3.append(" 和 PostgreSQL", 12);
    cout << "str3 = " << str3 << endl;
    // 中文一个字长度为 3
    str3.append("，顺便浏览一下《人人都是产品经理这本书》", 24, 39);
    cout << "str3 = " << str3 << endl;
}

int main() {
    test();
}