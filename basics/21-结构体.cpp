#include<iostream>
using namespace std;
#include<string>

/*
�﷨��struct �ṹ���� { �ṹ���Ա };
���ַ�ʽ��
struct �ṹ���� ������
struct �ṹ���� ������ = { ��Ա1,��Ա2 ....... }
����ṹ�壬˳�㴴������
*/

struct Student
{
	string name;
	int age;
	int score;
}student3;


int main() {
	// c++ ��struct����ʡ��
	struct Student student1;
	student1.name = "����";
	student1.age = 20;
	student1.score = 90;
	cout << "������" << student1.name << "���䣺" << student1.age << "������" << student1.score << endl;

	struct Student student2 = { "����", 18, 80 };
	cout << "������" << student2.name << "���䣺" << student2.age << "������" << student2.score << endl;

	student3.name = "����";
	student3.age = 25;
	student3.score = 90;
	cout << "������" << student3.name << "���䣺" << student3.age << "������" << student3.score << endl;

}

