#include<iostream>
using namespace std;

/*
���������ʽ��
����ֵ���� ������(����){
	�߼���
	
	return ����ֵ
}

�����ŵ� main ����֮ǰ
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
	cout << "�ӷ���" << increment(10, 3) << endl;
	cout << "������" << decrement(10, 3) << endl;
	cout << "�˷���" << multiply(10, 3) << endl;
	cout << "������" << division(10, 3) << endl;
}

