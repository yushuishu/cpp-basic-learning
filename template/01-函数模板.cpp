#include<iostream>
#include<string>
using namespace std;


/**
����ģ�壺
	����һ��ģ�壬���߱�������������н����ŵ� T ��Ҫ����T ��ͨ����������
*/
template<typename T>
void mySwap(T &a, T &b) {
	T temp = a;
	a = b;
	b = temp;
}


int main() {
	int a = 10;
	int b = 20;
	
	// 1���Զ������Ƶ�
	mySwap(a, b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	// 2����ʾָ�������Ƶ�
	mySwap<int>(a, b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	cout << "----------------------------------" << endl;

	double x = 1.1;
	double y = 2.2;
	mySwap(x, y);
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
}