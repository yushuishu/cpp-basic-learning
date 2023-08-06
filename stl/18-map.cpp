/**
 * @Author ：谁书-ss
 * @Date   ：2023-08-06 21:35
 * @IDE    ：IntelliJ Clion
 * @Motto  ：ABC(Always Be Coding)
 * <p></p>
 * @Description ：map中所有元素都是pair，pair中第一个元素key（键值），起到索引作用，第二个元素是value
 * 所有元素都会根据元素的键自动排序
 * map/multimap属于关联式容器，底层结构是用二叉树实现
 *
 * 区别：
 * map  不允许容器中有重复key
 * multimap 允许容器有重复key
 * <p></p>
 */

#include <iostream>

using namespace std;

#include <map>

#include <algorithm>


void printMap(map<int, string> &m) {
    for (map<int, string>::iterator it = m.begin(); it != m.end(); it++) {
        cout << "(key: " << (*it).first << ", value: " << it->second << ") ";
    }
    cout << endl;
}


/**
 * 构造 赋值
 */
void test01() {
    cout << "====================================== test01() 构造 赋值" << endl;
    map<int, string> map1;
    map1.insert(pair<int, string>(1, "张三"));
    map1.insert(pair<int, string>(2, "李四"));
    map1.insert(pair<int, string>(3, "王五"));
    printMap(map1);

    // 拷贝构造
    map<int, string> map2(map1);
    printMap(map2);

    // =
    map<int, string> map3;
    map3 = map1;
    printMap(map3);

}

/**
 * 大小和交换
 */
void test02() {
    cout << "====================================== test02() 大小和交换" << endl;
    map<int, string> map1;

    cout << "map1是否为空：" << map1.empty() << endl;
    cout << "map1大小为：" << map1.size() << endl;

    // 插入数据
    map1.insert(pair<int, string>(1, "张三"));
    map1.insert(pair<int, string>(2, "李四"));
    map1.insert(pair<int, string>(3, "王五"));

    cout << "map1是否为空：" << map1.empty() << endl;
    cout << "map1大小为：" << map1.size() << endl;

    // 交换
    map<int, string> map2;
    map2.insert(pair<int, string>(1, "张飞"));

    cout << "交换前" << endl;
    printMap(map1);
    printMap(map2);

    map1.swap(map2);

    cout << "交换后" << endl;
    printMap(map1);
    printMap(map2);
}

/**
 * 插入和删除
 */
void test03() {
    cout << "====================================== test03() 插入和删除" << endl;
    map<int, string> map1;

    // 第一种插入
    map1.insert(pair<int, string>(1, "张三"));
    // 第二种插入
    map1.insert(make_pair(2, "李四"));
    // 第三种
    map1.insert(map<int, string>::value_type(3, "王五"));
    // 第四种，如果不存在，value是0（不建议使用这种方式插入数据，一般用来访问元素）
    map1[4] = 50;

    printMap(map1);

    // 删除
    map1.erase(map1.begin());
    printMap(map1);

    // 按照key
    map1.erase(2);
    printMap(map1);

    // 删除（清空，等于 clear）
    map1.erase(map1.begin(), map1.end());
    printMap(map1);

    map1.clear();

}

/**
 * 查找和统计
 */
void test04() {
    cout << "====================================== test04() 查找和统计" << endl;
    map<int, string> map1;
    map1.insert(make_pair(1, "张三"));
    map1.insert(make_pair(2, "李四"));
    map1.insert(make_pair(3, "王五"));
    printMap(map1);

    map<int, string>::iterator pos = map1.find(3);
    if (pos != map1.end()) {
        cout << "查到元素key: " << pos->first << " value: " << pos->second << endl;
    } else {
        cout << "未找到" << endl;
    }

    // 统计，因为不能重复插入key，所以count结果要么是1 要么是0
    int num = map1.count(3);
    cout << "统计count ：" << num << endl;

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

void test05() {
    cout << "====================================== test05() 排序" << endl;
    // 加上 MyCompare，自定义排序规则，否则默认是 key升序
    map<int, int, MyCompare> map1;
    // 插入时，无序
    map1.insert(make_pair(1, 10));
    map1.insert(make_pair(4, 30));
    map1.insert(make_pair(5, 50));
    map1.insert(make_pair(2, 20));
    map1.insert(make_pair(3, 30));

    // 打印输出，升序
    for (map<int, int>::iterator it = map1.begin(); it != map1.end(); it++) {
        cout << "(key: " << (*it).first << ", value: " << it->second << ") ";
    }
    cout << endl;
}


int main() {
    test01();
    test02();
    test03();
    test04();
    test05();
}
