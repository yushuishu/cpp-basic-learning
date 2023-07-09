#include<iostream>

using namespace std;


/*
访问权限：三种
public      公共权限，类内可以访问，类外可以访问
protected   保护权限，类内可以访问，类外不可以访问，子类可以访问父类的权限内容
private     私有权限，类内可以访问，类外不可以访问，子类不可以访问父类的权限内容

struct默认为公共

*/

class Box {
    // 私有权限
private:
    // 属性
    double length;   // 长
    double breadth;  // 宽
    double height;   // 高
    string color;    // 颜色

    // 公共权限
public:
    void print() {
        cout << "长：" << this->length << " 宽：" << this->breadth << " 高：" << this->height << endl;
    }

    double volume() {
        // 体积 = 长 * 宽 * 高
        return this->length * this->breadth * this->height;
    }

    double surfaceArea() {
        // 表面积 = 长 * 宽 * 2 + 长 * 高 * 2 + 宽 * 高 * 2
        return this->length * this->breadth * 2 + this->length * this->height * 2 + this->breadth * this->height * 2;
    }


    // set get

    void setLength(double length) {
        this->length = length;
    }

    double getLength() {
        return this->length;
    }

    void setBreadth(double breadth) {
        this->breadth = breadth;
    }

    double getBreadth() {
        return this->breadth;
    }

    void setHeight(double height) {
        this->height = height;
    }

    double getHeight() {
        return this->height;
    }

};


int main() {
    Box box1;
    // 属性移动到私有权限之后，不可以直接通过 . 来访问属性吗，通过公共方法 set get 来访问，（和 Java一样）
    //box1.length = 10;
    //box1.breadth = 2;
    //box1.height = 2;
    box1.setLength(10);
    box1.setBreadth(2);
    box1.setHeight(2);


    box1.print();
    cout << "盒子的体积：" << box1.volume() << endl;
    cout << "盒子的表面积：" << box1.surfaceArea() << endl;

}