#include<iostream>
#include<string>
using namespace std;


/**
ע��㣺
	1��������̳и�����һ����ģ��ʱ��������������ʱ��Ҫָ����������T������
	2�������ָ�����������޷�����������ڴ�
	3����������ָ����������T�����ͣ�����Ҳ��Ҫ��Ϊģ��

�����������ģ�壬������Ҫָ����������T ����������
*/

template<class T>
class Base
{
public:
	T m;
};

//class Son :public Base    //���󣬱���֪�������е�T �����ͣ����ܼ̳и�����
class Son1 :public Base<int>
{
	
};

// ��������ָ����������T�����ͣ�����Ҳ��Ҫ��Ϊģ��
template<class T1, class T2>
class Son2 :public Base<T2>
{
	T1 obj;
};


int main() {
	Son1 s1;

	// int�Ǵ�����T1�� char�Ǵ�����T2��T2�ֽ����˸����е�T
	Son2<int, char> s2;
}