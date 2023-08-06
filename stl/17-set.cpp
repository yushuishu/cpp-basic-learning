/**
 * @Author ：谁书-ss
 * @Date   ：2023-08-06 16:42
 * @IDE    ：IntelliJ Clion
 * @Motto  ：ABC(Always Be Coding)
 * <p></p>
 * @Description ：set 有序序列，不允许有重复元素； multiset允许容器有重复元素
 * <p></p>
 */

#include <iostream>

using namespace std;

#include <string>
#include <set>

#include <algorithm>


void printSet(const set<int> &st) {
    for (set<int>::const_iterator it = st.begin(); it != st.end(); it++) {
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
    set<int> st1;
    //使用insert插入数据，其它容器才有push
    st1.insert(5);
    st1.insert(1);
    st1.insert(7);
    st1.insert(3);
    st1.insert(9);
    st1.insert(4);
    st1.insert(4);
    // set打印是有序的，不允许插入重新值
    printSet(st1);
}

/**
 * 赋值和交换
 */
void test02() {
    cout << "====================================== test02() 赋值和交换" << endl;
    set<int> st1;
    st1.insert(5);
    st1.insert(1);
    st1.insert(7);
    st1.insert(3);
    st1.insert(9);
    printSet(st1);

    // 拷贝构造
    set<int> st2(st1);
    printSet(st2);
    // =
    set<int> st3;
    st3 = st1;
    printSet(st3);

    // 交换
    set<int> st4;
    st4.insert(100);
    st4.insert(200);
    st4.insert(300);
    st1.swap(st4);
    printSet(st1);
    printSet(st1);

}

/**
 * 大小操作
 */
void test03() {
    cout << "====================================== test03() 大小操作" << endl;
    set<int> st1;
    st1.insert(5);
    st1.insert(1);
    st1.insert(7);
    st1.insert(3);
    st1.insert(9);
    printSet(st1);

    cout << "容器是否为空：" << st1.empty() << endl;
    cout << "容器大小：" << st1.size() << endl;

}

/**
 * 插入和删除
 */
void test04() {
    cout << "====================================== test04() 插入和删除" << endl;
    set<int> st1;
    st1.insert(5);
    st1.insert(1);
    st1.insert(7);
    st1.insert(3);
    st1.insert(9);
    printSet(st1);

    // 删除指定元素
    st1.erase(7);
    printSet(st1);
    // 删除区间（起始和结束，就等于清空clear）
    st1.erase(st1.begin(), st1.end());
    printSet(st1);
    // 清空
    st1.insert(5);
    st1.insert(1);
    st1.insert(7);
    st1.insert(3);
    st1.insert(9);
    printSet(st1);
    st1.clear();
    printSet(st1);

}

/**
 * 查找和统计
 */
void test05() {
    cout << "====================================== test05() 查找和统计" << endl;
    set<int> st1;
    st1.insert(5);
    st1.insert(1);
    st1.insert(7);
    st1.insert(3);
    st1.insert(9);
    printSet(st1);

    // 查找
    set<int>::iterator it = st1.find(7);
    cout << "查找元素7：" << *it << endl;

    // 统计：因为set不可重复特性，所以count() 统计结果要么是0 要么是1
    cout << "统计5的个数：" << st1.count(5) << endl;

}

/**
 * set和 multiset区别
 *
 * set不可插入重复数据
 * multiset 可以插入重复数据
 */
void test06() {
    cout << "====================================== test06() set和 multiset区别" << endl;
    set<int> st1;

    // 第一次插入数据
    pair<set<int>::iterator, bool> ret = st1.insert(666);
    if (ret.second) {
        cout << "第一次插入成功" << endl;
    } else {
        cout << "第一次插入失败" << endl;
    }
    printSet(st1);

    // 第二次插入数据
    ret = st1.insert(666);
    if (ret.second) {
        cout << "第二次插入成功" << endl;
    } else {
        cout << "第二次插入失败" << endl;
    }
    printSet(st1);


    cout << "------------------------" << endl;

    multiset<int> st2;
    st2.insert(10);
    st2.insert(10);
    for (multiset<int>::iterator it = st2.begin(); it != st2.end(); it++) {
        cout << *it << "   ";
    }
    cout << endl;
}

/**
 * pair对组
 */
void test07() {
    cout << "====================================== test06() pair对组" << endl;
    // 第一种创建方式
    pair<string, int> p("孙悟空", 50);
    cout << "姓名：" << p.first << "   年龄：" << p.second << endl;
    // 第二种创建方式
    pair<string, int> p2 = make_pair("猪八戒", 30);
    cout << "姓名：" << p2.first << "   年龄：" << p2.second << endl;
}

/**
 * 排序
 */
class MyCompare {
public:
    bool operator()(int v1, int v2) const {
        return v1 > v2;
    }
};

void test08() {
    cout << "====================================== test06() 排序" << endl;

    //插入数据之前指定排序规则，使用仿函数
    set<int, MyCompare> st1;
    st1.insert(5);
    st1.insert(1);
    st1.insert(10);
    st1.insert(3);

    for (set<int, MyCompare>::iterator it = st1.begin(); it != st1.end(); it++) {
        cout << *it << "  ";
    }
    cout << endl;
}

/**
 * 自定义数据类型，排序
 */
class Person {
public:
    string name;
    int age;

    Person(string name, int age) {
        this->name = name;
        this->age = age;
    }

};

class PersonCompare {
public:
    bool operator()(const Person &p1, const Person &p2) const {
        // 按年龄 降序
        return p1.age > p2.age;
    }
};

void test09() {
    cout << "====================================== test06() 自定义数据类型 排序" << endl;
    set<Person, PersonCompare> st1;
    Person p1("唐僧", 5);
    Person p2("孙悟空", 50);
    Person p3("猪八戒", 30);
    Person p4("沙僧", 40);
    st1.insert(p1);
    st1.insert(p2);
    st1.insert(p3);
    st1.insert(p4);
    for (set<Person, PersonCompare>::iterator it = st1.begin(); it != st1.end(); it++) {
        cout << "姓名：" << (*it).name << "  年龄：" << (*it).age;
    }
    cout << endl;
}

int main() {
    test01();
    test02();
    test03();
    test04();
    test05();
    test06();
    test07();
    test08();
    test09();
}