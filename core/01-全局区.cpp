#include<iostream>
using namespace std;


/*
���н�����ڴ����
�ֲ�����a�ĵ�ַ��1085275076
�ֲ�����b�ĵ�ַ��1085275108

��̬����s_a�ĵ�ַ��1809375240
��̬����s_b�ĵ�ַ��1809375244
ȫ�ֱ���g_a�ĵ�ַ��1809375232
ȫ�ֱ���g_b�ĵ�ַ��1809375236

ȫ�ֳ���c_g_a�ĵ�ַ��1809361840
ȫ�ֳ���c_g_b�ĵ�ַ��1809361844
�ַ�������str1�ĵ�ַ��1809362408

�ֲ�����c_l_a�ĵ�ַ��1085275140
�ֲ�����c_l_b�ĵ�ַ��1085275172
*/

int g_a = 10;
int g_b = 10;
const int c_g_a = 10;
const int c_g_b = 10;

int main() {
	// �ֲ�����
	int a = 10;
	int b = 10;
	cout << "�ֲ�����a�ĵ�ַ��" << (int)&a << endl;
	cout << "�ֲ�����b�ĵ�ַ��" << (int)&b << endl;

	// ��̬����
	static int s_a = 10;
	static int s_b = 10;
	cout << "��̬����s_a�ĵ�ַ��" << (int)&s_a << endl;
	cout << "��̬����s_b�ĵ�ַ��" << (int)&s_b << endl;

	// ȫ�ֱ���
	cout << "ȫ�ֱ���g_a�ĵ�ַ��" << (int)&g_a << endl;
	cout << "ȫ�ֱ���g_b�ĵ�ַ��" << (int)&g_b << endl;

	// ȫ�ֳ���
	cout << "ȫ�ֳ���c_g_a�ĵ�ַ��" << (int)&c_g_a << endl;
	cout << "ȫ�ֳ���c_g_b�ĵ�ַ��" << (int)&c_g_b << endl;

	// �ַ�������
	cout << "�ַ�������str1�ĵ�ַ��" << (int)&"hello c++" << endl;
	
	// �ֲ�����
	const int c_l_a = 10;
	const int c_l_b = 10;
	cout << "�ֲ�����c_l_a�ĵ�ַ��" << (int)&c_l_a << endl;
	cout << "�ֲ�����c_l_b�ĵ�ַ��" << (int)&c_l_b << endl;


}