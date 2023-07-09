/**
 * @Author ：谁书-ss
 * @Date   ：2023-07-09 19:09
 * @IDE    ：IntelliJ Clion
 * @Motto  ：ABC(Always Be Coding)
 * <p></p>
 * @Description ：vector容器存放自定义数据类型
 * <p></p>
 */
#include <iostream>

using namespace std;

#include <vector>
#include <algorithm>


class Person {
public:
    string name;
    int age;

    Person(string name, int age) {
        this->name = name;
        this->age = age;
    }
};

// 存放自定义数据类型
void myPrint(Person person) {
    cout << "name = " << person.name << "     age = " << person.age << endl;
}

void test() {
    vector<Person> personVector;

    Person p1("aaa", 10);
    Person p2("bbb", 30);
    Person p3("ccc", 20);

    personVector.push_back(p1);
    personVector.push_back(p2);
    personVector.push_back(p3);

    vector<Person>::iterator itBegin = personVector.begin(); //起始迭代器，指向容器中第一个元素
    vector<Person>::iterator itEnd = personVector.end(); //结束迭代器，指向容器中最后一个元素的下一个位置
    // 第一种遍历
    cout << "----------------------- 第一种遍历 --------------------" << endl;
    while (itBegin != itEnd) {
        cout << "name = " << (*itBegin).name << "     age = " << (*itBegin).age << endl;
        itBegin++;
    }

    // 第二种遍历
    cout << "----------------------- 第二种遍历 --------------------" << endl;
    itBegin = personVector.begin();
    for (; itBegin != itEnd; itBegin++) {
        // 指针取值
        //cout << "name = " << (*itBegin).name << "     age = " << (*itBegin).age << endl;
        // 箭头的方式取值
        cout << "name = " << itBegin->name << "     age = " << itBegin->age << endl;
    }

    // 第三种遍历：利用STL提供的遍历算法
    cout << "----------------------- 第三种遍历：利用STL提供的遍历算法 --------------------" << endl;
    for_each(personVector.begin(), personVector.end(), myPrint);

}

// 存放自定义数据类型 指针
void myPrint2(Person *person) {
    cout << "name = " << person->name << "     age = " << person->age << endl;
}

void test2() {
    cout << "============================================================================================================================" << endl;

    vector<Person *> personVector;

    Person p1("aaa", 10);
    Person p2("bbb", 30);
    Person p3("ccc", 20);

    personVector.push_back(&p1);
    personVector.push_back(&p2);
    personVector.push_back(&p3);

    vector<Person *>::iterator itBegin = personVector.begin(); //起始迭代器，指向容器中第一个元素
    vector<Person *>::iterator itEnd = personVector.end(); //结束迭代器，指向容器中最后一个元素的下一个位置

    // for
    for (; itBegin != itEnd; itBegin++) {
        cout << "name = " << (*itBegin)->name << "     age = " << (*itBegin)->age << endl;
    }
    cout << "-----------------------------------" << endl;
    // 利用STL提供的遍历算法
    for_each(personVector.begin(), personVector.end(), myPrint2);
}

int main() {
    test();
    test2();
}