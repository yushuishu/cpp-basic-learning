#include<iostream>
#include<string>
using namespace std;

// 1��ֱ�Ӱ���.cppԴ�ļ�
//#include "person.h" //������Ϊ .cpp
//#include "person.cpp"

// 2����������ʵ��д��ͬһ���ļ��У������ĺ�׺��Ϊ .hpp
#include "person.hpp"

/**
��ģ���г�Ա��������ʱ�����ڵ��ý׶Σ����·��ļ���дʱ���Ӳ���

�����
	1��ֱ�Ӱ���.cppԴ�ļ�
	2����������ʵ��д��ͬһ���ļ��У������ĺ�׺��Ϊ .hpp��hpp��Լ�������ƣ�������ǿ��

*/


int main() {
	Person<string, int> p("����", 35);
	p.printPerson();

}