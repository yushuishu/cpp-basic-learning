#include<iostream>
using namespace std;


class Person
{
public:
	int num1;
	int num2;
	int num3;


	// ��ͳ��ʼ��
	/*Person(int a, int b, int c) {
		num1 = a;
		num2 = b;
		num3 = c;
	}*/

	// ��ʼ���б�
	Person(int a, int b, int c): num1(a), num2(b), num3(c) {}



	void PritnPerson() {
		cout << "num1��" << num1 << endl;
		cout << "num2��" << num2 << endl;
		cout << "num3��" << num3 << endl;
	}


	Person() {}
	~Person() {

	}

private:

};



int main() {
	Person person(7, 8, 9);
	person.PritnPerson();
}