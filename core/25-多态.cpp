#include<iostream>
using namespace std;

/**

��̬

*/


// ����
class Animal
{
public:
	// ʹ��virtual���Σ���Ϊ�麯��
	virtual void speak() 
	{
		cout << "����˵��" << endl;
	}
private:

};

// ��
class Dog: public Animal
{
public:
	// ��д ������
	void speak() 
	{
		cout << "����" << endl;
	}

private:

};

// è
class Cat : public Animal
{
public:
	// ��д ������
	void speak()
	{
		cout << "è��" << endl;
	}

private:

};


// ��������
void doSpeak(Animal & animal)
{
	animal.speak();
}



void test()
{
	cout << "Animal��С = " << sizeof(Animal) << endl;
	cout << "Dog��С = " << sizeof(Dog) << endl;
	cout << "Cat��С = " << sizeof(Cat) << endl;


	Dog dog;
	doSpeak(dog);

	Cat cat;
	doSpeak(cat);
}



int main() {
	test();
}