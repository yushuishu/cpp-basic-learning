#include<iostream>
using namespace std;

/*
��java����һ����

if else
��Ŀ����
switch
while
for
goto
*/
int main() {
	// if else
	cout << "========================================= if else ===================================" << endl;
	int a = 10;
	if (a > 5) {
		cout << "����5" << endl;
	} 
	else if(a > 10) {
		cout << "����10" << endl;
	}
	else
	{
		cout << "С��5" << endl;
	}

	// ��Ŀ����
	cout << "========================================= ��Ŀ���� ===================================" << endl;
	cout << (a > 10 ? a : 10) << endl;

	// switch
	cout << "========================================= switch ===================================" << endl;
	int score = 65;
	switch (score / 10)
	{
	case 0:
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		cout << "������" << endl;
		break;
	case 6:
	case 7:
		cout << "����" << endl;
		break;
	case 8:
		cout << "����" << endl;
		break;
	case 9:
		cout << "�ǳ�����" << endl;
		break;
	default:
		cout << "����������Ҫ��" << endl;
		break;
	}


	// while
	cout << "========================================= while ===================================" << endl;
	int flag = 1;
	while (true)
	{	
		if (flag <= 5) {
			cout << "whileѭ���ڣ�" << flag << " ��" << endl;
			flag++;
			continue;
		}
		break;
	}


	// for
	cout << "========================================= for ===================================" << endl;

	for (size_t i = 0; i < 5; i++)
	{
		cout << "forѭ���ڣ�" << i << " ��" << endl;
	}
	
	// goto
	cout << "========================================= goto ===================================" << endl;
	goto FLAG;
	cout << "goto֮���һ�д���" << endl;
	// ���
	FLAG:
	cout << "goto֮��ڶ��д���" << endl;


	system("pause");
	return 0;
}
