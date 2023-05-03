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

		// 在Building类中，使用friend 修饰GoodGay类，就可以访问私有成员
		cout << "好基友访问：" << building->m_bedRoom << endl;
	}

private:
	int b;
};

class Building
{
	friend class GoodGay;
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
}