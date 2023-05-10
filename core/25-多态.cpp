#include<iostream>
using namespace std;

/**

多态

*/


// 动物
class Animal
{
public:
	// 使用virtual修饰，成为虚函数
	virtual void speak() 
	{
		cout << "动物说话" << endl;
	}
private:

};

// 狗
class Dog: public Animal
{
public:
	// 重写 函数，
	void speak() 
	{
		cout << "狗叫" << endl;
	}

private:

};

// 猫
class Cat : public Animal
{
public:
	// 重写 函数，
	void speak()
	{
		cout << "猫叫" << endl;
	}

private:

};


// 动作：叫
void doSpeak(Animal & animal)
{
	animal.speak();
}



void test()
{
	cout << "Animal大小 = " << sizeof(Animal) << endl;
	cout << "Dog大小 = " << sizeof(Dog) << endl;
	cout << "Cat大小 = " << sizeof(Cat) << endl;


	Dog dog;
	doSpeak(dog);

	Cat cat;
	doSpeak(cat);
}



int main() {
	test();
}