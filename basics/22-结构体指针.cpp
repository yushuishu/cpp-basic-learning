#include<iostream>
using namespace std;
#include<string>


struct Student
{
	string name;
	int age;
	int score;
};


int main() {
	// c++ ��struct����ʡ��
	struct Student student1;
	student1.name = "����";
	student1.age = 20;
	student1.score = 90;
	cout << "������" << student1.name << "���䣺" << student1.age << "������" << student1.score << endl;


	Student* p = &student1;

	cout << "������" << p->name << "���䣺" << p->age << "������" << p->score << endl;
}