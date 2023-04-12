#include<iostream>
using namespace std;


class Box
{
    // ����Ȩ��
public:
    // ����
    double length;   // ��
    double breadth;  // ��
    double height;   // ��
    string color;    // ��ɫ

    // ����
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

    void print()
    {
        cout << "����" << this->length << " ��" << this->breadth << " �ߣ�" << this->height << endl;
    }

    void setLength(double length)
    {
        this->length = length;
    }

};



int main() {
    Box box1;
    box1.length = 10;
    box1.breadth = 2;
    box1.height = 2;

    box1.print();
    cout << "���ӵ������" << box1.volume() << endl;
    cout << "���ӵı������" << box1.surfaceArea() << endl;

    cout << "-----------------------------------------------------------------" << endl;

    // �޸�ֵ
    box1.setLength(20);
    box1.print();
    cout << "���ӵ������" << box1.volume() << endl;
    cout << "���ӵı������" << box1.surfaceArea() << endl;

}