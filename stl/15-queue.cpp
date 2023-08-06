/**
 * @Author ：谁书-ss
 * @Date   ：2023-08-06 15:32
 * @IDE    ：IntelliJ Clion
 * @Motto  ：ABC(Always Be Coding)
 * <p></p>
 * @Description ：队列，先进先出的数据结构，
 * <p></p>
 */

#include <iostream>

using namespace std;

#include <queue>


class Person {
public:
    string name;
    int age;

    Person(string name, int age) {
        this->name = name;
        this->age = age;
    }
};

void test01() {
    queue<Person> q;

    Person p1("唐僧", 20);
    Person p2("孙悟空", 50);
    Person p3("猪八戒", 30);
    Person p4("沙僧", 40);

    // 入队
    q.push(p1);
    q.push(p2);
    q.push(p3);
    q.push(p4);

    cout << "队列大小：" << q.size() << endl;
    // 出队
    while (!q.empty()) {
        cout << "队头：" << q.front().name << "  " << q.front().age << endl;
        cout << "队尾：" << q.back().name << "  " << q.back().age << endl;
        // 出队
        q.pop();
    }
    cout << "队列大小：" << q.size() << endl;

}

int main() {
    test01();
}