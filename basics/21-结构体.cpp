#include<iostream>
using namespace std;
#include<string>

/*
语法：struct 结构体名 { 结构体成员 };
三种方式：
struct 结构体名 变量名
struct 结构体名 变量名 = { 成员1,成员2 ....... }
定义结构体，顺便创建变量
*/

struct Student
{
	string name;
	int age;
	int score;
}student3;


int main() {
	// c++ 中struct可以省略
	struct Student student1;
	student1.name = "张三";
	student1.age = 20;
	student1.score = 90;
	cout << "姓名：" << student1.name << "年龄：" << student1.age << "分数：" << student1.score << endl;

	struct Student student2 = { "李四", 18, 80 };
	cout << "姓名：" << student2.name << "年龄：" << student2.age << "分数：" << student2.score << endl;

	student3.name = "王五";
	student3.age = 25;
	student3.score = 90;
	cout << "姓名：" << student3.name << "年龄：" << student3.age << "分数：" << student3.score << endl;

}

