/**
 * @Author ：谁书-ss
 * @Date   ：2023-07-09 20:01
 * @IDE    ：IntelliJ Clion
 * @Motto  ：ABC(Always Be Coding)
 * <p></p>
 * @Description ：string构造函数
 * <p></p>
 * string();                    创建一个空的字符串
 * string(const char* s);       使用字符串初始化
 * string(const string& str);   使用一个string对象初始化另一个string对象
 * string(int n, char c);       使用 n个字符c 初始化
 */
#include <iostream>

using namespace std;

#include <string>

void test() {
    string s1;

    const char *str = "你好世界，hello world";
    string s2(str);
    cout << s2 << endl;

    string s3(s2);
    cout << s3 << endl;

    string s4(3, 'a');
    cout << s4 << endl;
}


int main() {
    test();
}