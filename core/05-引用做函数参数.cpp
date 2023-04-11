#include<iostream>
using namespace std;

// Ö¸Õë
void swap1(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

// ÒıÓÃ
void swap2(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

int main() {
	int a = 10;
	int b = 20;

	swap1(&a, &b);
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;

	swap2(a, b);
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;
}