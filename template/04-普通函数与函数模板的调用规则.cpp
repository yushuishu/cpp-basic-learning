#include<iostream>
#include<string>
using namespace std;

/**
1���������ģ�����ͨ����������ʵ�֣����ȵ�����ͨ������
2������ͨ����ģ������б���ǿ�Ƶ��úͺ���ģ��
3������ģ��Ҳ���Է�������
4���������ģ����Բ������õ�ƥ�䣬���ȵ��ú���ģ�塣
*/




void myPrint(int a, int b) {
	cout << "������ͨ����" << endl;
}

template<typename T>
void myPrint(T a, T b) {
	cout << "����ģ�庯��" << endl;
}

template<typename T>
void myPrint(T a, T b, T c) {
	cout << "����ģ�庯��" << endl;
}




int main() {
	int a = 10;
	int b = 20;
	int c = 30;

	// ������ͨ����
	myPrint(a, b);

	// ͨ����ģ������б�ǿ�Ƶ��ú���ģ��
	myPrint<>(a, b);

	// ��������
	myPrint(a, b, c);

	// ���ﺯ����������ͨ���������ǵ�����ģ�庯������Ϊ���Ϳ��Ը��õ�ƥ��
	// ��ͨ������������ʽת�������ǲ���ֱ��ͨ������ģ��� ����T �Ƶ�
	char c1 = 'a';
	char c2 = 'b';
	myPrint(c1, c2);

}