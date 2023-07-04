#include<iostream>
#include<string>
using namespace std;



/**

 
1��ȫ�ֺ�������ʵ�� ֱ��������������Ԫ����
2��ȫ�ֺ�������ʵ�� ��Ҫ��ǰ�ñ�����֪��ȫ�ֺ����Ĵ���
		printPerson2() ��Ҫ��һ���յĲ����б��޸�Ϊ printPerson2()<>
		ʵ�ִ����λ�ã���Ҫ�ŵ���֮ǰ����ʵ�����õ��� Person �࣬��Ҫ��ǰ���� Person ��ģ��
*/

template<class T1, class T2>
class Person;

// ȫ�ֺ�����������������ʵ��
template<class T1, class T2>
void printPerson2(Person<T1, T2> p) {
	cout << "������" << p.m_name << "   ���䣺" << p.m_age << endl;
}

template<class T1, class T2>
class Person 
{
	//ȫ�ֺ�������ʵ��
	friend void printPerson1(Person<T1,T2> p) {
		cout << "������" << p.m_name << "   ���䣺" << p.m_age << endl;
	}

	// ȫ�ֺ�����������������ʵ��
	friend void printPerson2<>(Person<T1, T2> p);

public:
	T1 m_name;
	T2 m_age;

	Person(T1 name, T2 age) {
		this->m_name = name;
		this->m_age = age;
	}
};




int main() {
	Person<string, int> p("����", 40);
	printPerson1(p);

	cout << "------------------------" << endl;

	printPerson2(p);
}