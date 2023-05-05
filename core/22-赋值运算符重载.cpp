#include<iostream>
using namespace std;



class  Person
{
public:
	int *my_age;

	Person(int age)
	{
		// 堆区需要析构函数释放内存
		my_age = new int(age);
	}

	~Person()
	{
		if (my_age != NULL)
		{
			delete my_age;
			my_age = NULL;
		}
	}

	// 重载赋值运算符 =
	Person& operator=(Person &p)
	{
		// 编译器提供的浅拷贝
		//my_age = p.my_age;

		// 应该先判断是否有属性在堆区，如果有，应该先释放干净，再深拷贝
		if (my_age !=NULL)
		{
			delete my_age;
			my_age = NULL;
		}
		my_age = new int(*p.my_age);
		return *this;
	}

private:

};


void test()
{
	Person p1(10);
	Person p2(20);
	
	cout << "p1年龄：" << *p1.my_age << endl;
	cout << "p2年龄：" << *p2.my_age << endl;

	// 赋值操作：析构函数释放内存，报错（重复释放内存），这是直接使用 = 赋值操作时 为浅拷贝
	// 使用 重载赋值函数 之后，运行正常
	p2 = p1;
	cout << "p2年龄：" << *p2.my_age << endl;

	cout << "=============================" << endl;
	// 连续赋值：（重载赋值函数，返回值必须返回自身，否则报错）
	Person p3(30);
	p3 = p2 = p1;
	cout << "p1年龄：" << *p1.my_age << endl;
	cout << "p2年龄：" << *p2.my_age << endl;
	cout << "p3年龄：" << *p3.my_age << endl;
}

int main() {
	test();
}