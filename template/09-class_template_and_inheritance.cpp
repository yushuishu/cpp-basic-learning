#include<iostream>
#include<string>

using namespace std;


/**
类模板与继承

注意点：
	1、当子类继承父类是一个类模板时，子类在声明的时候，要指定出父类中T的类型
	2、如果不指定，编译器无法给子类分配内存
	3、如果想灵活指定出父类中T的类型，子类也需要变为模板

如果父类是类模板，子类需要指定出父类中T 的数据类型
*/

template<class T>
class Base {
public:
    T m;
};

//class Son :public Base    //错误，必须知道父类中的T 的类型，才能继承给子类
class Son1 : public Base<int> {

};

// 如果想灵活指定出父类中T的类型，子类也需要变为模板
template<class T1, class T2>
class Son2 : public Base<T2> {
    T1 obj;
};


int main() {
    Son1 s1;

    // int是传给了T1， char是传给了T2，T2又交给了父类中的T
    Son2<int, char> s2;
}