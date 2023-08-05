/**
 * @Author ：谁书-ss
 * @Date   ：2023-08-04 21:25
 * @IDE    ：IntelliJ Clion
 * @Motto  ：ABC(Always Be Coding)
 * <p></p>
 * @Description ：vector数据结构和数组相似，也称为单端数组
 * 与普通数组不同之处在于，数组是静态空间，而 vector可以动态扩展，动态扩展并不是在原来空间之后继续接新空间，而是找更大的内存空间
 * 然后将原数据拷贝到新空间，释放原空间
 * <p></p>
 */

#include <iostream>

using namespace std;

#include <string>

#include <vector>


void printVector(vector<int> &v) {
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *it << "  ";
    }
    cout << endl;
}




/**
 * 构造
 */
void test01() {
    cout << "====================================== test01() 构造" << endl;
    // 默认构造，无参构造
    vector<int> v1;
    for (int i = 0; i < 10; i++) {
        v1.push_back(i);
    }
    printVector(v1);

    // 区间方式构造
    vector<int> v2(v1.begin(), v1.end());
    printVector(v2);

    // N个elem方式构造
    vector<int> v3(3, 100);
    printVector(v3);

    // 拷贝构造
    vector<int> v4(v3);
    printVector(v4);

}

/**
 * 赋值
 */
void test02() {
    cout << "====================================== test02() 赋值" << endl;
    vector<int> v1;
    for (int i = 0; i < 10; i++) {
        v1.push_back(i);
    }

    // =
    vector<int> v2 = v1;
    printVector(v2);

    // assign
    vector<int> v3;
    v3.assign(v1.begin(), v1.end());
    printVector(v3);

    // assign N个elem
    vector<int> v4;
    v4.assign(3, 99);
    printVector(v4);

}

/**
 * 容量和大小
 */
void test03() {
    cout << "====================================== test03() 容量和大小" << endl;
    vector<int> v1;
    for (int i = 0; i < 6; i++) {
        v1.push_back(i);
    }
    printVector(v1);

    if (v1.empty()) {
        cout << "v1为空" << endl;
    } else {
        cout << "v1不为空，容量大小：" << v1.capacity() << "  大小为：" << v1.size() << endl;
    }
    // 重新指定大小，比原来长了，默认用0填充位置，
    v1.resize(10);
    printVector(v1);
    // 重新指定大小，比原来长了，指定666填充位置
    v1.resize(15, 666);
    printVector(v1);


}

/**
 * 插入和删除
 */
void test04() {
    cout << "====================================== test04() 插入和删除" << endl;
    vector<int> v1;
    for (int i = 1; i < 6; i++) {
        // 尾插
        v1.push_back(i * 10);
    }
    printVector(v1);
    // 尾删
    v1.pop_back();
    printVector(v1);

    // 第一个参数是迭代器
    v1.insert(v1.begin(), 100);
    printVector(v1);

    // 第一个参数是迭代器，第二个是数量
    v1.insert(v1.begin(), 2, 200);
    printVector(v1);

    // 删除
    v1.erase(v1.begin());
    printVector(v1);

    // 删除（清空）
    v1.erase(v1.begin(), v1.end());
    //v1.clear();
    printVector(v1);

}

/**
 * 数据存取
 */
void test05() {
    cout << "====================================== test05() 数据存取" << endl;
    vector<int> v1;
    for (int i = 0; i < 10; i++) {
        v1.push_back(i);
    }
    // []访问
    for (int i = 0; i < v1.size(); ++i) {
        cout << v1[i] << "    ";
    }
    cout << endl;

    // at访问
    for (int i = 0; i < v1.size(); ++i) {
        cout << v1.at(i) << "    ";
    }
    cout << endl;

    // 获取第一个元素
    cout << v1.front() << endl;

    // 获取最后一个元素
    cout << v1.back() << endl;

}

/**
 * 互换容器
 */
void test06() {
    cout << "====================================== test06() 互换容器" << endl;
    vector<int> v1;
    for (int i = 0; i < 10; i++) {
        v1.push_back(i);
    }
    printVector(v1);

    vector<int> v2;
    for (int i = 9; i >= 0 ; i--) {
        v2.push_back(i);
    }
    printVector(v2);

    cout << "交换后：" << endl;
    v1.swap(v2);
    printVector(v1);
    printVector(v2);

}

/**
 * 预留空间：数据量比较大，就可以使用预留空间
 * 和 resize() 不一样，reserve()预留空间，下标访问报错，没有填充的值
 */
void test07() {
    cout << "====================================== test07() 预留空间" << endl;
    vector<int>v;
    // 预留空间
    v.reserve(100000);
    int num = 0;
    int *p = NULL;
    for (int i = 0; i < 100000; ++i) {
        v.push_back(i);
        if (p != &v[0]) {
            p = &v[0];
            num++;
        }
    }
    cout << "num: " << num << endl;
}

int main() {
    test01();
    test02();
    test03();
    test04();
    test05();
    test06();
}