#include<iostream>
#include<string>
#include<fstream>
using namespace std;



// �ı��ļ� д�ļ�
void test1() {
	// 1��ͷ�ļ� #include<fstream>

	// 2������������
	ofstream ofs;

	// 3��ָ���򿪷�ʽ������ʹ�� | ���ʹ�ã��磺ios::out | ios:binary
	//    ios::in	   ���ļ���ʽ��
	//	  ios::out     д�ļ���ʽ��
	//	  ios::ate     ��ʼλ�ã��ļ�ĩβ
	//    ios::app     ׷�ӷ�ʽд�ļ�
	//    ios:trunc    ����ļ�������ɾ�����ٴ���
	//    ios:binary   �����Ʒ�ʽ
	ofs.open("test.txt", ios::out);

	// 4��д����
	ofs << "����������" << endl;
	ofs << "�Ա���" << endl;
	ofs << "���䣺20" << endl;

	// 5���ر��ļ�
	ofs.close();

}

// �ı��ļ�  ���ļ�
void test2() {
	// 1��ͷ�ļ� #include<fstream>

	// 2������������
	ifstream ifs;

	// 3��ָ���򿪷�ʽ
	ifs.open("test.txt", ios::in);

	// 4���ж��Ƿ�򿪳ɹ�
	if (!ifs.is_open()) {
		cout << "���ļ�ʧ��" << endl;
		return;
	}

	// 5��������
	// ��һ��
	char buf[1024] = { 0 };
	while (ifs >> buf)
	{
		cout << buf << endl;
	}
	// �ڶ���
	/*char buf[1024] = { 0 };
	while (ifs.getline(buf, sizeof(buf)))
	{
		cout << buf << endl;
	}*/
	// ������
	/*string buf;
	while (getline(ifs, buf))
	{
		cout << buf << endl;
	}*/
	// ������
	/*char c;
	while ((c = ifs.get()) != EOF)
	{
		cout << c;
	}*/


	// 6���ر��ļ�
	ifs.close();

}

// ���������ݶ���
class Person
{
public:
	char m_name[64]; // ����
	int m_age; // ����

};

// ������ д�ļ�
void test3() {
	// 1��ͷ�ļ� #include<fstream>
	
	// 2������������
	ofstream ofs;

	// 3��ָ���򿪷�ʽ
	ofs.open("person.txt", ios::out | ios::binary);

	// 4��д�ļ�����
	Person p = { "����", 20 };
	ofs.write((const char*)&p, sizeof(Person));

	// 5���ر��ļ�
	ofs.close();
}

// ������ ���ļ�
void test4() {
	// 1��ͷ�ļ� #include<fstream>

	// 2������������
	ifstream ifs;

	// 3��ָ���򿪷�ʽ
	ifs.open("person.txt", ios::in | ios::binary);

	// 4���ж��Ƿ�򿪳ɹ�
	if (!ifs.is_open()) {
		cout << "���ļ�ʧ��" << endl;
		return;
	}

	// 5�����ļ�����
	Person p;
	ifs.read((char*)&p, sizeof(Person));
	cout << "������" << p.m_name << " ���䣺" << p.m_age << endl;

	// 6���ر��ļ�
	ifs.close();
}





int main() {
	// �ı��ļ�
	//test1();
	//test2();

	// ������
	//test3();
	test4();
}