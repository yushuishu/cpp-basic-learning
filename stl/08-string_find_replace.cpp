/**
 * @Author ：谁书-ss
 * @Date   ：2023-07-16 21:29
 * @IDE    ：IntelliJ Clion
 * @Motto  ：ABC(Always Be Coding)
 * <p></p>
 * @Description ：字符串查找和替换
 * <p></p>
 * int find(const string& str, int pos = 0) const;      str第一次出现位置，从pos开始查找
 * int find(const char* s, int pos = 0) const;          s第一次出现位置，从pos开始查找
 * int find(const char* s, int pos, int n) const;       pos位置查找s的前n个字符第一次位置
 * int find(const char c, int pos = 0) const;           查找字符c第一次出现位置
 * int rfind(const string& str, int pos = npos) const;  查找str最后一次位置，从pos开始查找
 * int rfind(const char* s, int pos = npos) const;      查找s最后一次出现位置，从pos开始查找
 * int rfind(const char* s, int pos, int n) const;      从pos查找s的前n个字符最后一次位置
 * int rfind(const char c, int pos = 0) const;          查找字符c最后一次出现位置
 * string& replace(int pos, int n, const string& str);  替换从pos开始n个字符为字符串str
 * string& replace(int pos, int n, const char* s);      替换从pos开始的n个字符为字符串s
 */

#include <iostream>

using namespace std;

#include <string>


void test() {
    string str1 = "abcdefg";

    int pos = str1.find("cd");
    cout << "pos = " << pos << endl;
    int pos2 = str1.find("xy");
    cout << "pos2 = " << pos2 << endl;

    // find() 从左往右查找
    // rfind() 从右往左找
    pos = str1.rfind("cd");
    cout << "pos = " << pos << endl;

    // 从下标 1的字符开始 5个字符，xy
    str1.replace(1, 5, "xy");
    cout << "str1 = " << str1 << endl;

}


int main() {
    test();
}