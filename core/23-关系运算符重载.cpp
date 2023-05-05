#include<iostream>
using namespace std;



class  Person
{
public:
	string name;
	int age;

	Person(string name, int age)
	{
		this->name = name;
		this->age = age;
	}

	bool operator==(Person &p)
	{
		if (this->name == p.name && this->age == p.age)
		{
			return true;
		}
		return false;
	}

	bool operator!=(Person& p)
	{
		if (this->name != p.name || this->age != p.age)
		{
			return true;
		}
		return false;
	}

private:

};



void test()
{
	Person p1("���", 20);
	Person p2("���", 20);
	Person p3("����", 20);

	if (p1 == p2)
	{
		cout << "p1 �� p2 ���" << endl;
	}
	else
	{
		cout << "p1 �� p2 �����" << endl;
	}

	if (p1 != p3)
	{
		cout << "p1 �� p3 �����" << endl;
	}
	else
	{
		cout << "p1 �� p3 ���" << endl;
	}
}

int main() {
	test();
}
