#include<iostream>
#include<string>

using namespace std;

/*
 * 类模板分文件编写
 * */

// 1、直接包含.cpp源文件
//#include "person.h" //报错，改为 .cpp
//#include "person.cpp"

// 2、将声明和实现写到同一个文件中，并更改后缀名为 .hpp
#include "person.hpp"

/**
类模板中成员函数创建时机是在调用阶段，导致分文件编写时链接不到

解决：
	1、直接包含.cpp源文件
	2、将声明和实现写到同一个文件中，并更改后缀名为 .hpp，hpp是约定的名称，并不是强制

*/


int main() {
    Person<string, int> p("刘备", 35);
    p.printPerson();

}