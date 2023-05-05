#include<iostream>
using namespace std;


// 自定义整型
class MyInteger
{
	friend ostream& operator<<(ostream& cout, const MyInteger& myInteger);
public:
	MyInteger()
	{
		m_num = 0;
	}

	// 重载前置 ++ 运算符，返回引用，是为了一直对一个数据进行递增操作：++(++num)
	MyInteger& operator++()
	{
		m_num++;
		return *this;
	}

	// 重载后置 ++ 运算符 （int 占位，和上面的前置++ 区分重载）
	MyInteger operator++(int)
	{
		// 先记录结果
		MyInteger temp = *this;
		// 后 递增
		m_num++;
		// 返回记录结果
		return temp;
	}

private:
	int m_num;
};

// 全局函数重载 <<
ostream& operator<<(ostream& cout,const MyInteger& myInteger)
{
	cout << "myInteger.m_num：" << myInteger.m_num << endl;
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