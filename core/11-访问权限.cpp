#include<iostream>
using namespace std;


/*
����Ȩ�ޣ�����
public      ����Ȩ�ޣ����ڿ��Է��ʣ�������Է���
protected   ����Ȩ�ޣ����ڿ��Է��ʣ����ⲻ���Է��ʣ�������Է��ʸ����Ȩ������
private     ˽��Ȩ�ޣ����ڿ��Է��ʣ����ⲻ���Է��ʣ����಻���Է��ʸ����Ȩ������

structĬ��Ϊ����

*/

class Box
{
    // ˽��Ȩ��
private:
    // ����
    double length;   // ��
    double breadth;  // ��
    double height;   // ��
    string color;    // ��ɫ

    // ����Ȩ��
public:
    void print()
    {
        cout << "����" << this->length << " ��" << this->breadth << " �ߣ�" << this->height << endl;
    }
    double volume()
    {
        // ��� = �� * �� * ��
        return this->length * this->breadth * this->height;
    }
    double surfaceArea()
    {
        // ����� = �� * �� * 2 + �� * �� * 2 + �� * �� * 2
        return this->length * this->breadth * 2 + this->length * this->height * 2 + this->breadth * this->height * 2;
    }


    // set get

    void setLength(double length)
    {
        this->length = length;
    }
    double getLength()
    {
        return this->length;
    }

    void setBreadth(double breadth)
    {
        this->breadth = breadth;
    }
    double getBreadth()
    {
        return this->breadth;
    }

    void setHeight(double height)
    {
        this->height = height;
    }
    double getHeight()
    {
        return this->height;
    }

};



int main() {
    Box box1;
    // �����ƶ���˽��Ȩ��֮�󣬲�����ֱ��ͨ�� . ������������ͨ���������� set get �����ʣ����� Javaһ����
    //box1.length = 10;
    //box1.breadth = 2;
    //box1.height = 2;
    box1.setLength(10);
    box1.setBreadth(2);
    box1.setHeight(2);


    box1.print();
    cout << "���ӵ������" << box1.volume() << endl;
    cout << "���ӵı������" << box1.surfaceArea() << endl;

}