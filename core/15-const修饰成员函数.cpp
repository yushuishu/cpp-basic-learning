#include<iostream>
using namespace std;

class Person
{
public:
	int a;
	// mutable �����������ʹ�ڳ������У�Ҳ�����޸����ֵ
	mutable int b; 

	Person() {}
	~Person() {}

	// thisָ��ı��� ��ָ�볣���� ָ���ָ���ǲ������޸ĵ�
	// const Person* const this;
	// �ڳ�Ա��������ӵ� const �����ε��� thisָ��ֵ�������޸�
	void shwoPerson() const {
		// this->a = 100;

		// ��������������޸�
		this->b = 200;
	}

	void func1() {}

private:
	
};



int main() {
	Person person;
	person.shwoPerson();

	// ������
	const Person p;
	//p.a = 500; // �����������޸�
	p.b = 600; // ����������������£������޸�

	p.shwoPerson();
	//p.func1(); // �����󣬲����Ե�����ͨ��������Ϊ��ͨ���������޸ı���

}