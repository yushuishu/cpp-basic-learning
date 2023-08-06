/**
 * @Author ：谁书-ss
 * @Date   ：2023-08-06 15:45
 * @IDE    ：IntelliJ Clion
 * @Motto  ：ABC(Always Be Coding)
 * <p></p>
 * @Description ：无序序列，不支持随机访问
 * <p></p>
 */

#include <iostream>

using namespace std;

#include <list>

#include <algorithm>


void printList(const list<int> &lt) {
    for (list<int>::const_iterator it = lt.begin(); it != lt.end(); it++) {
        // 不能用 [] 或 at 访问
        cout << *it << "   ";
    }
    cout << endl;
}


/**
 * 构造函数
 */
void test01() {
    cout << "====================================== test01() 构造函数" << endl;
    // 无参构造
    list<int> l1;
    l1.push_back(10);
    l1.push_back(20);
    l1.push_back(30);
    l1.push_back(40);
    l1.push_back(50);
    printList(l1);

    // 区间构造
    list<int> l2(l1.begin(), l1.end());
    printList(l2);

    // 拷贝构造
    list<int> l3(l1);
    printList(l3);

    // N 个elem
    list<int> l4(3, 666);
    printList(l4);
}

/**
 * 赋值和交换
 */
void test02() {
    cout << "====================================== test02() 赋值和交换" << endl;
    list<int> l1;
    l1.push_back(10);
    l1.push_back(20);
    l1.push_back(30);
    l1.push_back(40);
    l1.push_back(50);
    printList(l1);

    // =
    list<int> l2 = l1;
    printList(l2);

    // assign
    list<int> l3;
    l3.assign(l1.begin(), l1.end());
    printList(l3);

    // N 个elem
    list<int> l4;
    l4.assign(3, 666);
    printList(l4);

    // 交换
    list<int> l5;
    l5.push_back(1);
    l5.push_back(2);
    l5.push_back(3);
    swap(l1, l5);
    printList(l1);
    printList(l5);

}

/**
 * 大小操作
 */
void test03() {
    cout << "====================================== test03() 大小操作" << endl;
    list<int> l1;
    l1.push_back(10);
    l1.push_back(20);
    l1.push_back(30);
    l1.push_back(40);
    l1.push_back(50);
    printList(l1);

    cout << "是否空：" << l1.empty() << endl;
    cout << "大小：" << l1.size() << endl;

    // 重新指定大小
    l1.resize(10);
    cout << "是否空：" << l1.empty() << endl;
    cout << "大小：" << l1.size() << endl;
}

/**
 * 插入和删除
 */
void test04() {
    cout << "====================================== test04() 插入和删除" << endl;
    list<int> l1;
    // 尾部插入
    l1.push_back(10);
    l1.push_back(20);
    l1.push_back(30);
    l1.push_back(40);
    // 头部插入
    l1.push_front(50);
    printList(l1);

    // 删除头部
    l1.pop_front();
    printList(l1);
    // 删除尾部
    l1.pop_back();
    printList(l1);

    // 插入
    l1.insert(l1.begin(), 50);
    l1.insert(l1.begin(), 50);
    printList(l1);

    // 删除
    l1.erase(l1.begin());
    printList(l1);

    // 移除（所有匹配的值都被移除）
    l1.remove(666);
    printList(l1);

    // 清除
    l1.clear();
    printList(l1);

}

/**
 * 数据存取
 */
void test05() {
    cout << "====================================== test05() 数据存取" << endl;
    list<int> l1;
    l1.push_back(10);
    l1.push_back(20);
    l1.push_back(30);
    l1.push_back(40);
    l1.push_back(50);
    printList(l1);

    cout << "第一个元素：" << l1.front() << endl;
    cout << "最后一个元素：" << l1.back() << endl;

    // 验证迭代器是不支持随机访问的
    list<int>::iterator it = l1.begin();
    it++;
    it--;
    //it= it+3; // 操作报错

}

/**
 * 排序
 */
void test06() {
    cout << "====================================== test06() 排序" << endl;
    list<int> l1;
    l1.push_back(5);
    l1.push_back(9);
    l1.push_back(1);
    l1.push_back(3);
    l1.push_back(7);
    printList(l1);

    // 反转
    l1.reverse();
    printList(l1);
    //升序
    l1.sort();
    printList(l1);
    // 降序
    l1.reverse();
    printList(l1);

}

int main() {
    test01();
    test02();
    test03();
    test04();
    test05();
    test06();
}