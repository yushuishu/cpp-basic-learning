/**
 * @Author ：谁书-ss
 * @Date   ：2023-07-09 19:06
 * @IDE    ：IntelliJ Clion
 * @Motto  ：ABC(Always Be Coding)
 * <p></p>
 * @Description ：vector容器存放内置数据类型
 * <p></p>
 */
#include <iostream>

using namespace std;

#include <vector>
#include <algorithm>

void myPrint(int val) {
    cout << val << endl;
}

void test1() {
    // 创建一个vector容器，数组
    vector<int> v1;
    // 容器添加数据
    v1.push_back(10);
    v1.push_back(50);
    v1.push_back(20);
    v1.push_back(40);
    // 迭代器访问容器中的数据
    vector<int>::iterator itBegin = v1.begin(); //起始迭代器，指向容器中第一个元素
    vector<int>::iterator itEnd = v1.end(); //结束迭代器，指向容器中最后一个元素的下一个位置

    // 第一种遍历
    cout << "----------------------- 第一种遍历 --------------------" << endl;
    while (itBegin != itEnd) {
        cout << *itBegin << endl;
        itBegin++;
    }

    // 第二种遍历
    cout << "----------------------- 第二种遍历 --------------------" << endl;
    itBegin = v1.begin();
    for (; itBegin != itEnd; itBegin++) {
        cout << *itBegin << endl;
    }

    // 第三种遍历：利用STL提供的遍历算法
    cout << "----------------------- 第三种遍历：利用STL提供的遍历算法 --------------------" << endl;
    for_each(v1.begin(), v1.end(), myPrint);
}

int main() {
    test1();
}