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
		// ����visit2()������
		//cout << "�û��ѷ��ʣ�" << building->m_bedRoom << endl;
	}

	void visit2();

private:
	int b;
};

void GoodGay::visit2() {
	cout << "�û��ѷ��ʣ�" << building->m_sittingRoom << endl;
	// 
	cout << "�û��ѷ��ʣ�" << building->m_bedRoom << endl;
}

class Building
{
	// friend ����ָ����Ա����Ϊ��Ԫ��visit2������ͨ������ʵ�ֵķ�ʽ����Ч��
	friend void GoodGay::visit2();
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
	goodGay.visit2();
}