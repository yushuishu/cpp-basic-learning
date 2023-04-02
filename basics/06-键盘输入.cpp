#include<iostream>
using namespace std;
#include<string>

/*
关键字 cin
语法：cin >> 变量
*/
int main() {
	// 整型输入
	int a = 0;
	cout << "请输入整型变量：" << endl;
	cin >> a;
	cout << a << endl;

	// 浮点型输入
	double b = 0;
	cout << "请输入浮点型变量：" << endl;
	cin >> b;
	cout << b << endl;

	// 字符型输入
	char c = 0;
	cout << "请输入字符型变量：" << endl;
	cin >> c;
	cout << c << endl;

	// 布尔型输入
	bool d = 0;
	cout << "请输入布尔型变量：" << endl;
	cin >> d;
	cout << d << endl;

	system("pause");
	return 0;
}
