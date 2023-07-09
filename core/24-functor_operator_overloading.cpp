#include<iostream>

using namespace std;

#include<string>

/*
 * 仿函数运算符重载
 * */
class MyPrint {
public:
    void operator()(string str) {
        cout << str << endl;
    }

private:

};

class MyAdd {
public:
    int operator()(int num1, int num2) {
        return num1 + num2;
    }

private:

};


int main() {
    MyPrint myPrint;
    myPrint("hello world");

    MyAdd myAdd;
    cout << myAdd(1, 2) << endl;

    // ÄäÃûº¯Êý¶ÔÏó
    cout << MyAdd()(2, 3) << endl;


}