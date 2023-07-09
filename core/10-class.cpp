#include<iostream>

using namespace std;


/*
 * 类
 * */

class Box {
    // 公共权限
public:
    // 属性
    double length;   // 长
    double breadth;  // 宽
    double height;   // 高
    string color;    // 颜色

    // 方法
    double volume() {
        // 体积 = 长 * 宽 * 高
        return this->length * this->breadth * this->height;
    }

    double surfaceArea() {
        // 表面积 = 长 * 宽 * 2 + 长 * 高 * 2 + 宽 * 高 * 2
        return this->length * this->breadth * 2 + this->length * this->height * 2 + this->breadth * this->height * 2;
    }

    void print() {
        cout << "长：" << this->length << " 宽：" << this->breadth << " 高：" << this->height << endl;
    }

    void setLength(double length) {
        this->length = length;
    }

};


int main() {
    Box box1;
    box1.length = 10;
    box1.breadth = 2;
    box1.height = 2;

    box1.print();
    cout << "盒子的体积：" << box1.volume() << endl;
    cout << "盒子的表面积：" << box1.surfaceArea() << endl;

    cout << "-----------------------------------------------------------------" << endl;

    // 修改值
    box1.setLength(20);
    box1.print();
    cout << "盒子的体积：" << box1.volume() << endl;
    cout << "盒子的表面积：" << box1.surfaceArea() << endl;

}