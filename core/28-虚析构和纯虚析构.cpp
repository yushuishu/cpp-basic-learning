#include<iostream>
#include<string>
using namespace std;


/**

���⣺��̬ʹ���У���������������Կ��ٵ���������ô����ָ�����ͷ�ʱ�޷����õ��������������
�����ʽ���������е�����������Ϊ���������ߴ�������

�������ʹ����������ԣ�
	���Խ������ָ���ͷ��������
	����Ҫ�о���ĺ���ʵ��
���������ߴ�����������
	����Ǵ����������������ڳ����࣬�޷�ʵ��������

*/

class Animal
{
public:
	virtual void speak() = 0;
	Animal() {
		cout << "Animal���캯��" << endl;
	}
	// ʹ�� ������ �������������ͷŲ��ɾ�����
	/*virtual ~Animal() {
		cout << "Animal��������" << endl;
	}*/

	// ������������Ҫ��������ʵ��
	virtual ~Animal() = 0;

};

Animal::Animal() {

}


class Cat :public Animal
{
public:
	void speak() {
		cout << *my_name << "������" << endl;
	}

	Cat(string name) {
		cout << "Cat���캯��" << endl;
		my_name = new string(name);
	}


	~Cat() {
		cout << "Cat��������" << endl;

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