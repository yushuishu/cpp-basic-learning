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
	// c++ 中struct可以省略
	struct Student student1;
	student1.name = "张三";
	student1.age = 20;
	student1.score = 90;
	cout << "姓名：" << student1.name << "年龄：" << student1.age << "分数：" << student1.score << endl;


	Student* p = &student1;

	cout << "姓名：" << p->name << "年龄：" << p->age << "分数：" << p->score << endl;
}