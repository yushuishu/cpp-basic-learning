#include<iostream>

using namespace std;


/*
 * 关系运算符重载
 * */

class Person {
public:
    string name;
    int age;

    Person(string name, int age) {
        this->name = name;
        this->age = age;
    }

    bool operator==(Person &p) {
        if (this->name == p.name && this->age == p.age) {
            return true;
        }
        return false;
    }

    bool operator!=(Person &p) {
        if (this->name != p.name || this->age != p.age) {
            return true;
        }
        return false;
    }

private:

};


void test() {
    Person p1("李白", 20);
    Person p2("李白", 20);
    Person p3("苏轼", 20);

    if (p1 == p2) {
        cout << "p1 和 p2 相等" << endl;
    } else {
        cout << "p1 和 p2 不相等" << endl;
    }

    if (p1 != p3) {
        cout << "p1 和 p3 不相等" << endl;
    } else {
        cout << "p1 和 p3 相等" << endl;
    }
}

int main() {
    test();
}