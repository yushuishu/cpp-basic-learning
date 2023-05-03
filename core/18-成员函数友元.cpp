#include<iostream>
using namespace std;
#include<string>


class Building;
class GoodGay
{
public:
	int a;
	Building* building;

	GoodGay() {
		building = new Building;
	}

	void visit() {
		cout << "好基友访问：" << building->m_sittingRoom << endl;
		// 报错，visit2()不报错
		//cout << "好基友访问：" << building->m_bedRoom << endl;
	}

	void visit2();

private:
	int b;
};

void GoodGay::visit2() {
	cout << "好基友访问：" << building->m_sittingRoom << endl;
	// 
	cout << "好基友访问：" << building->m_bedRoom << endl;
}

class Building
{
	// friend 修饰指定成员函数为友元，visit2必须是通过声明实现的方式才有效，
	friend void GoodGay::visit2();
public:
	string m_sittingRoom;

	Building() {
		m_sittingRoom = "客厅";
		m_bedRoom = "卧室";
	}

private:
	string m_bedRoom;
};


int main() {
	GoodGay goodGay;
	goodGay.visit();
	goodGay.visit2();
}