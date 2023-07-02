#include<iostream>
#include<string>
using namespace std;


/**

问题：多态使用中，如果子类中有属性开辟到堆区，那么父类指针在释放时无法调用到子类的析构代码
解决方式：将父类中的析构函数改为虚析构或者纯虚析构

虚析构和纯虚析构共性：
	可以解决父类指针释放子类对象
	都需要有具体的函数实现
虚析构或者纯虚析构区别：
	如果是纯虚析构，该类属于抽象类，无法实例化对象

*/

class Animal
{
public:
	virtual void speak() = 0;
	Animal() {
		cout << "Animal构造函数" << endl;
	}
	// 使用 虚析构 ，解决父类对象释放不干净问题
	/*virtual ~Animal() {
		cout << "Animal析构函数" << endl;
	}*/

	// 纯虚析构：需要有声明和实现
	virtual ~Animal() = 0;

};

Animal::Animal() {

}


class Cat :public Animal
{
public:
	void speak() {
		cout << *my_name << "喵喵喵" << endl;
	}

	Cat(string name) {
		cout << "Cat构造函数" << endl;
		my_name = new string(name);
	}


	~Cat() {
		cout << "Cat析构函数" << endl;

	}

	string* my_name;
};



void test() {
	Animal* animal = new Cat("Tom");
	animal->speak();
	delete animal;

}



int main() {
	test();
}