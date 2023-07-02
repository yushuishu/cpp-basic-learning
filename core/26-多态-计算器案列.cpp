#include<iostream>
#include<string>
using namespace std;


// 计算器，基类
class AbstractCalculator
{
public:
	virtual int getResult() {
		return 0;
	}
	int num1;
	int num2;
};

// 加法
class AddCalculator :public AbstractCalculator
{
public:
	int getResult() {
		return num1 + num2;
	}
};

// 减法
class SubCalculator :public AbstractCalculator
{
public:
	int getResult() {
		return num1 - num2;
	}
};

// 乘法
class MultiplyCalculator :public AbstractCalculator
{
public:
	int getResult() {
		return num1 * num2;
	}
};

// 除法
class DivCalculator :public AbstractCalculator
{
public:
	int getResult() {
		return num1 / num2;
	}
};



void test() {
	// 多态使用条件，父类指针或引用指向子类对象
	AbstractCalculator* a = new AddCalculator;
	a->num1 = 20;
	a->num2 = 10;
	cout << a->num1 << "+" << a->num2 << "=" << a->getResult() << endl;
	delete a;

	AbstractCalculator* b = new SubCalculator;
	b->num1 = 20;
	b->num2 = 10;
	cout << b->num1 << "-" << b->num2 << "=" << b->getResult() << endl;
	delete b;

	AbstractCalculator* c = new MultiplyCalculator;
	c->num1 = 20;
	c->num2 = 10;
	cout << c->num1 << "*" << c->num2 << "=" << c->getResult() << endl;
	delete c;

	AbstractCalculator* d = new DivCalculator;
	d->num1 = 20;
	d->num2 = 10;
	cout << d->num1 << "/" << d->num2 << "=" << d->getResult() << endl;
	delete d;

}



int main() {
	test();
}

