#include<iostream>
#include<string>
using namespace std;

/**

���麯���ͳ����ࣺ
	����ķ���һ�㱻����ʵ�ֺ������߼������л�����麯�������Լ�дΪ��virtual int getResult() = 0;
	���麯���൱��java�еĳ��󷽷�

*/

// ����
class Base
{
public:
	// ���麯��
	// ֻҪ��һ�����麯����������Ϊ�����࣬�������ص㣺1���޷�ʵ��������2������������࣬������д�����еĴ��麯��������Ҳ���ڳ�����
	virtual int getResult() = 0;
	int num1;
	int num2;
};


class Son : public Base {
public:
	int getResult() {

	}
};

int main() {
	//Base b;      // �������޷�ʵ��������
	//new Base;    // �������޷�ʵ��������


	//������д�����еĴ��麯��������Ҳ���ڳ�����
	Son s;
}
