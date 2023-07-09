#include<iostream>
#include<string>

using namespace std;

#include "MyArray.hpp"

/*
 * 案列-数组封装
 * */

class Person {
public:
    string m_name;
    int m_age;

    Person() {

    }

    Person(string name, int age) {
        this->m_name = name;
        this->m_age = age;
    }

    void printPerson() {
        cout << "name = " << this->m_name << "   age = " << this->m_age << endl;
    }
};

void printPersonArray(MyArray<Person> &arr) {
    for (int i = 0; i < arr.getSize(); i++) {
        cout << "name = " << arr[i].m_name << "   age = " << arr[i].m_age << endl;
    }
}


int main() {

    MyArray<int> arr1(5);
    for (size_t i = 0; i < 5; i++) {
        arr1.push_back(i);
    }
    cout << "-------------------- arr1 打印" << endl;
    arr1.printArray();


    MyArray<int> arr2(arr1);
    cout << "-------------------- arr2 打印" << endl;
    arr2.printArray();

    arr2.pop_back();
    cout << "-------------------- arr2 尾删打印" << endl;
    arr2.printArray();

    MyArray<int> arr3(100);
    cout << "-------------------- arr3 打印" << endl;
    arr3.printArray();


    arr3 = arr1;
    cout << "-------------------- arr3 打印2" << endl;
    arr3.printArray();


    cout << endl << "=================== 测试自定义数据类型" << endl;

    Person p1("刘备", 35);
    Person p2("关羽", 35);
    Person p3("张飞", 30);
    Person p4("赵云", 28);
    Person p5("黄忠", 40);

    MyArray<Person> arr4(10);
    arr4.push_back(p1);
    arr4.push_back(p2);
    arr4.push_back(p3);
    arr4.push_back(p4);
    arr4.push_back(p5);

    cout << "-------------------- arr4 打印" << endl;
    printPersonArray(arr4);

    MyArray<Person> arr5(arr4);
    cout << "-------------------- arr5 打印" << endl;
    printPersonArray(arr5);

    arr5.pop_back();
    cout << "-------------------- arr5 尾删打印" << endl;
    printPersonArray(arr5);

    MyArray<Person> arr6(100);
    cout << "-------------------- arr6 打印" << endl;
    printPersonArray(arr6);

    arr6 = arr4;
    cout << "-------------------- arr3 打印2" << endl;
    printPersonArray(arr6);


}