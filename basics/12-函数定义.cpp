#include<iostream>
using namespace std;

/*
函数定义格式：
返回值类型 函数名(参数){
	逻辑体
	
	return 返回值
}

函数放到 main 函数之前
*/

int increment(int num1, int num2) {
	return num1 + num2;
}
int decrement(int num1, int num2) {
	return num1 - num2;
}
int multiply(int num1, int num2) {
	return num1 * num2;
}
double division(int num1, int num2) {
	return num1 / num2;
}

int main() {
	cout << "加法：" << increment(10, 3) << endl;
	cout << "减法：" << decrement(10, 3) << endl;
	cout << "乘法：" << multiply(10, 3) << endl;
	cout << "除法：" << division(10, 3) << endl;
}

