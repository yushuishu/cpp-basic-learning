#include<iostream>
using namespace std;


/*
运行结果：内存分配
局部变量a的地址：1085275076
局部变量b的地址：1085275108

静态变量s_a的地址：1809375240
静态变量s_b的地址：1809375244
全局变量g_a的地址：1809375232
全局变量g_b的地址：1809375236

全局常量c_g_a的地址：1809361840
全局常量c_g_b的地址：1809361844
字符串常量str1的地址：1809362408

局部常量c_l_a的地址：1085275140
局部常量c_l_b的地址：1085275172
*/

int g_a = 10;
int g_b = 10;
const int c_g_a = 10;
const int c_g_b = 10;

int main() {
	// 局部变量
	int a = 10;
	int b = 10;
	cout << "局部变量a的地址：" << (int)&a << endl;
	cout << "局部变量b的地址：" << (int)&b << endl;

	// 静态变量
	static int s_a = 10;
	static int s_b = 10;
	cout << "静态变量s_a的地址：" << (int)&s_a << endl;
	cout << "静态变量s_b的地址：" << (int)&s_b << endl;

	// 全局变量
	cout << "全局变量g_a的地址：" << (int)&g_a << endl;
	cout << "全局变量g_b的地址：" << (int)&g_b << endl;

	// 全局常量
	cout << "全局常量c_g_a的地址：" << (int)&c_g_a << endl;
	cout << "全局常量c_g_b的地址：" << (int)&c_g_b << endl;

	// 字符串常量
	cout << "字符串常量str1的地址：" << (int)&"hello c++" << endl;
	
	// 局部常量
	const int c_l_a = 10;
	const int c_l_b = 10;
	cout << "局部常量c_l_a的地址：" << (int)&c_l_a << endl;
	cout << "局部常量c_l_b的地址：" << (int)&c_l_b << endl;


}