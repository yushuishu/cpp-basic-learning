#include<iostream>
#include<string>
using namespace std;


// ������������
class AbstractCalculator
{
public:
	virtual int getResult() {
		return 0;
	}
	int num1;
	int num2;
};

// �ӷ�
class AddCalculator :public AbstractCalculator
{
public:
	int getResult() {
		return num1 + num2;
	}
};

// ����
class SubCalculator :public AbstractCalculator
{
public:
	int getResult() {
		return num1 - num2;
	}
};

// �˷�
class MultiplyCalculator :public AbstractCalculator
{
public:
	int getResult() {
		return num1 * num2;
	}
};

// ����
class DivCalculator :public AbstractCalculator
{
public:
	int getResult() {
		return num1 / num2;
	}
};



void test() {
	// ��̬ʹ������������ָ�������ָ���������
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

