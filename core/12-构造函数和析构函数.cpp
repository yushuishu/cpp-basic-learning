#include<iostream>
using namespace std;

/*
���캯������Ҫ�����ڴ�������ʱΪ����ĳ�Ա���Ը�ֵ�����캯���ɱ������Զ����ã������ֶ����á�
������������Ҫ�����ڶ�������ǰϵͳ�Զ����ã�ִ��һЩ��������

���캯���﷨������(){}
1�����캯��û�з���ֵ��Ҳ��дvoid
2������������������ͬ
3�����캯�������в�������˿��Է�������
4�������ڵ��ö����ʱ���Զ����ù��죬�����ֶ����ã�����ֻ�����һ��

���������﷨��~����(){}
1����������û�з���ֵ��Ҳ��дvoid
2������������������ͬ��������ǰ���Ϸ��� ~
3�����������������в�������˲����Է�������
4�������ڶ�������ǰ�Զ��������������������ֶ����ã�����ֻ�����һ�Σ����Կ������� �ͷ��ڴ� ����
*/

class MyClass
{
public:
	int num;

	MyClass();
	~MyClass();

	// �вι���
	MyClass(int a);
	// ��������
	MyClass(const MyClass &p);

private:

};

// :: ��������������ʵ��
MyClass::MyClass()
{
	cout << "���캯���ĵ���" << endl;
}

MyClass::~MyClass()
{
	cout << "���������ĵ���" << endl;
}

MyClass::MyClass(int a)
{
	num = a;
	cout << "�вι��캯���ĵ���" << endl;
}
MyClass::MyClass(const MyClass& p)
{
	num = p.num;
}

int main() {
	// ע�⣺���á��޲ι��족ʱ����Ҫд���ţ���Ϊ����������Ϊ�� ��������
	// �޲ι��� ����
	MyClass myClass1;
	// �вι��� ����
	MyClass myClass2(10);
	// �������� ����
	MyClass myClass3(myClass2);
	// ��ʽת�������൱�� MyClass myClass4 = MyClass(20);
	MyClass myClass4 = 20;

	cout << "myClass3 �� num ��" << myClass3.num << endl;

}