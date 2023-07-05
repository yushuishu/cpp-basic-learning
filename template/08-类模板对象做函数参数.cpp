#include<iostream>
#include<string>
using namespace std;

/**
��ģ��ʵ�������Ķ����������εķ�ʽ��
	1��ָ����������ͣ�ֱ����ʾ�������������
	2������ģ�廯���������еĲ�����Ϊģ����д���
	3��������ģ�廯��������������� ģ�廯���д���
*/


template<class T1, class T2>
class Person {
public:
	T1 m_name;
	T2 m_age;

	Person(T1 name, T2 age) {
		this->m_name = name;
		this->m_age = age;
	}

	void printPerson() {
		cout << "������" << this->m_name << "   ���䣺" << this->m_age << endl;
	}

};


// 1��ָ�����������
void printPerson1(Person<string, int> &p) {
	p.printPerson();
}
// 2������ģ�廯
template<class T1, class T2>
void printPerson2(Person<T1, T2> &p) {
	cout << "T1 �����ͣ�" << typeid(T1).name() << endl;
	cout << "T2 �����ͣ�" << typeid(T2).name() << endl;
	p.printPerson();
}
// 3��������ģ�廯
template<class T>
void printPerson3(T &p) {
	cout << "T �����ͣ�" << typeid(T).name() << endl;
	p.printPerson();
}


int main() {
	Person<string, int> p("����", 35);

	// 1��ָ�����������
	printPerson1(p);
	// 2������ģ�廯
	printPerson2(p);
	// 3��������ģ�廯
	printPerson3(p);

}