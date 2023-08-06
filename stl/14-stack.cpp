/**
 * @Author ：谁书-ss
 * @Date   ：2023-08-05 15:58
 * @IDE    ：IntelliJ Clion
 * @Motto  ：ABC(Always Be Coding)
 * <p></p>
 * @Description ：stack 栈是一种先进后出的数据结构
 * <p></p>
 */
#include <iostream>

using namespace std;

#include <stack>


void test01() {
    stack<int> sk;
    for (int i = 0; i < 10; ++i) {
        // 入栈
        sk.push(i);
    }
    cout << "栈大小：" << sk.size() << endl;
    // 出栈
    while (!sk.empty()) {
        cout << "栈顶元素：" << sk.top() << endl;
        //出栈
        sk.pop();
    }
    cout << "栈大小：" << sk.size() << endl;

}


int main() {
    test01();
}
