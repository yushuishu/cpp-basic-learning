#include<iostream>
using namespace std;


// �Զ�������
class MyInteger
{
	friend ostream& operator<<(ostream& cout, const MyInteger& myInteger);
public:
	MyInteger()
	{
		m_num = 0;
	}

	// ����ǰ�� ++ ��������������ã���Ϊ��һֱ��һ�����ݽ��е���������++(++num)
	MyInteger& operator++()
	{
		m_num++;
		return *this;
	}

	// ���غ��� ++ ����� ��int ռλ���������ǰ��++ �������أ�
	MyInteger operator++(int)
	{
		// �ȼ�¼���
		MyInteger temp = *this;
		// �� ����
		m_num++;
		// ���ؼ�¼���
		return temp;
	}

private:
	int m_num;
};

// ȫ�ֺ������� <<
ostream& operator<<(ostream& cout,const MyInteger& myInteger)
{
	cout << "myInteger.m_num��" << myInteger.m_num << endl;
	return cout;
}


void test()
{
	MyInteger myInteger;
	cout << ++myInteger << endl;

	MyInteger myInteger2;
	cout << myInteger2++ << endl;
	cout << myInteger2 << endl;
}


int main() {
	test();
}