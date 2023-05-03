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
		cout << "�û��ѷ��ʣ�" << building->m_sittingRoom << endl;

		// ��Building���У�ʹ��friend ����GoodGay�࣬�Ϳ��Է���˽�г�Ա
		cout << "�û��ѷ��ʣ�" << building->m_bedRoom << endl;
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
		m_sittingRoom = "����";
		m_bedRoom = "����";
	}

private:
	string m_bedRoom;
};


int main() {
	GoodGay goodGay;
	goodGay.visit();
}