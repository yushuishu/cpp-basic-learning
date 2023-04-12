#include<iostream>
using namespace std;


/*
如果调用时，传入了数据，就用传入的数据，没有传递相应的参数，就用默认值

1、如果某个位置已经有了默认参数，那么从这个位置往后，从左到右都必须有默认值，比如 test1()函数 参数 b 设置的默认值10，那么后面的c 也必须有默认值
2、如果函数声明参数有默认值，函数实现不能有默认值。声明和实现 只能有一个有默认值
*/


void test1(int a, int b = 10, int c = 20)
{
	cout << "a: " << a << " b: " << b << " c: " << c << endl;
}


int main() {
	test1(1);

}