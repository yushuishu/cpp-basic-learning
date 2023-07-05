#include<iostream>
#include<string>
using namespace std;
#include "MyArray.hpp"




class Person
{
public:
	string m_name;
	int m_age;

	Person() {

	}
	Person(string name, int age) {
		this->m_name = name;
		this->m_age = age;
	}
	void printPerson() {
		cout << "name = " << this->m_name << "   age = " << this->m_age << endl;
	}
};

void printPersonArray(MyArray<Person> &arr) {
	for (int i = 0; i < arr.getSize(); i++)
	{
		cout << "name = " << arr[i].m_name << "   age = " << arr[i].m_age << endl;
	}
}



int main() {

	MyArray<int> arr1(5);
	for (size_t i = 0; i < 5; i++)
	{
		arr1.push_back(i);
	}
	cout << "-------------------- arr1 ��ӡ" << endl;
	arr1.printArray();


	MyArray<int> arr2(arr1);
	cout << "-------------------- arr2 ��ӡ" << endl;
	arr2.printArray();

	arr2.pop_back();
	cout << "-------------------- arr2 βɾ��ӡ" << endl;
	arr2.printArray();

	MyArray<int> arr3(100);
	cout << "-------------------- arr3 ��ӡ" << endl;
	arr3.printArray();


	arr3 = arr1;
	cout << "-------------------- arr3 ��ӡ2" << endl;
	arr3.printArray();


	
	
	cout << endl << "=================== �����Զ�����������" << endl;

	Person p1("����", 35);
	Person p2("����", 35);
	Person p3("�ŷ�", 30);
	Person p4("����", 28);
	Person p5("����", 40);

	MyArray<Person> arr4(10);
	arr4.push_back(p1);
	arr4.push_back(p2);
	arr4.push_back(p3);
	arr4.push_back(p4);
	arr4.push_back(p5);

	cout << "-------------------- arr4 ��ӡ" << endl;
	printPersonArray(arr4);

	MyArray<Person> arr5(arr4);
	cout << "-------------------- arr5 ��ӡ" << endl;
	printPersonArray(arr5);

	arr5.pop_back();
	cout << "-------------------- arr5 βɾ��ӡ" << endl;
	printPersonArray(arr5);

	MyArray<Person> arr6(100);
	cout << "-------------------- arr6 ��ӡ" << endl;
	printPersonArray(arr6);

	arr6 = arr4;
	cout << "-------------------- arr3 ��ӡ2" << endl;
	printPersonArray(arr6);



}