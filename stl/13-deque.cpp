/**
 * @Author ：谁书-ss
 * @Date   ：2023-08-05 15:13
 * @IDE    ：IntelliJ Clion
 * @Motto  ：ABC(Always Be Coding)
 * <p></p>
 * @Description ：deque双端数组，可以对头端插入删除操作
 * deque 和 vector区别：
 * 1、vector对于头部的插入删除效率低，数据量越大，效率越低
 * 2、deque对头部插入和删除速度快
 * 3、vector访问元素时，速度比deque快
 * <p></p>
 */

#include <iostream>

using namespace std;

#include <string>

#include <deque>

#include <algorithm>

void printDeque(const deque<int> &d) {
    for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++) {
        cout << *it << "   ";
    }
    cout << endl;
}


/**
 * 构造
 */
void test01() {
    cout << "====================================== test01() 构造" << endl;
    deque<int> d1;
    for (int i = 0; i < 10; i++) {
        d1.push_back(i);
    }
    printDeque(d1);

    // 区间
    deque<int> d2(d1.begin(), d1.end());
    printDeque(d2);

    // N个elem方式构造
    deque<int> d3(3, 100);
    printDeque(d3);

    // 拷贝构造
    deque<int> d4(d3);
    printDeque(d4);

}

/**
 * 赋值
 */
void test02() {
    cout << "====================================== test02() 赋值" << endl;
    deque<int> d1;
    for (int i = 0; i < 10; i++) {
        d1.push_back(i);
    }
    printDeque(d1);

    // =
    deque<int> d2 = d1;
    printDeque(d2);

    // assign
    deque<int> d3;
    d3.assign(d1.begin(), d1.end());

    // assign N个elem
    d3.assign(3, 100);

}

/**
 * 大小操作
 */
void test03() {
    cout << "====================================== test03() 大小操作" << endl;
    deque<int> d1;
    for (int i = 0; i < 6; i++) {
        d1.push_back(i);
    }
    printDeque(d1);

    // deque没有容器容量的概念
    if (d1.empty()) {
        cout << "d1为空" << endl;
    } else{
        cout << "d1不为空，大小：" << d1.size() << endl;
    }
    // 重新指定大小，默认0填充，可以指定填充值
    d1.resize(10);
    printDeque(d1);
}

/**
 * 插入和删除
 */
void test04() {
    cout << "====================================== test04() 插入和删除" << endl;
    deque<int> d1;
    for (int i = 0; i < 10; i++) {
        // 尾插
        d1.push_back(i);
    }
    printDeque(d1);

    // 头插
    d1.push_front(100);
    printDeque(d1);
    // 头删
    d1.pop_front();
    printDeque(d1);
    // 尾删
    d1.pop_back();
    printDeque(d1);

    // 指定位置插入
    d1.insert(d1.begin(), 666);
    printDeque(d1);
    // 指定插入的数量
    d1.insert(d1.begin(), 2, 100);
    printDeque(d1);
    // 区间
    deque<int> d2;
    d2.push_back(111);
    d2.push_back(222);
    d2.push_back(333);
    d1.insert(d1.begin(), d2.begin(), d2.end());
    printDeque(d1);

    // 删除
    d1.erase(d1.begin());
    printDeque(d1);
    d1.erase(d1.begin(), d1.end());
    //d1.clear();
    printDeque(d1);

}

/**
 * 数据存取
 */
void test05() {
    cout << "====================================== test05() 数据存取" << endl;
    deque<int> d1;
    for (int i = 0; i < 10; i++) {
        // 尾插
        d1.push_back(i);
    }
    printDeque(d1);

    // []
    cout << d1[2] << endl;
    // at
    cout << d1.at(2) << endl;
    // 第一个元素
    cout << d1.front() << endl;
    // 最后一个元素
    cout << d1.back() << endl;
}

/**
 * 排序
 */
void test06() {
    cout << "====================================== test06() 排序" << endl;
    deque<int> d;
    d.push_back(5);
    d.push_back(10);
    d.push_back(1);
    d.push_back(3);
    d.push_back(8);
    printDeque(d);

    sort(d.begin(), d.end());
    printDeque(d);
    reverse(d.begin(), d.end());
    printDeque(d);
}


int main() {
    test01();
    test02();
    test03();
    test04();
    test05();
    test06();
}