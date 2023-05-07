#include<iostream>
using namespace std;
#include<string>

/*
仿函数

*/
class MyPrint
{
public:
	void operator()(string str)
	{
		cout << str << endl;
	}
private:

};

class MyAdd
{
public:
	int operator()(int num1, int num2)
	{
		return num1 + num2;
	}
private:

};


int main() {
	MyPrint myPrint;
	myPrint("hello world");

	MyAdd myAdd;
	cout << myAdd(1, 2) << endl;

	// 匿名函数对象
	cout << MyAdd()(2, 3) << endl;

	

}