#include<iostream>
using namespace std;


class Person
{
	// friend ���Σ����Է���˽�г�Ա
	friend void func1(Person* person);
public:
	int a;

	Person() {
		a = 100;
		b = 200;
	}
	~Person() {}

private:
	int b;
};

// ȫ�ֺ���
void func1(Person* person) {
	cout << "a�� " << person->a << endl;

	// ����ʽ�ķ�ʽʹ�� friend ���κ������Ϳ������ person->b
	cout << "b�� " << person->b << endl;
}

void func2() {
	Person person;
	func1(&person);
}



int main() {
	func2();
}