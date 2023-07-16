/**
 * @Author ：谁书-ss
 * @Date   ：2023-07-16 21:54
 * @IDE    ：IntelliJ Clion
 * @Motto  ：ABC(Always Be Coding)
 * <p></p>
 * @Description ：插入和删除
 * <p></p>
 */

#include <iostream>

using namespace std;

#include <string>

void test() {
    string str1 = "hello";

    // 插入
    str1.insert(1, "666");
    cout << "str1 = " << str1 <<endl;

    // 删除：从下标1开始，删除1个
    str1.erase(1, 3);
    cout << "str1 = " << str1 <<endl;
}

int main() {
    test();
}