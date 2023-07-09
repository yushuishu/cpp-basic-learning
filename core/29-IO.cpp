#include<iostream>
#include<string>
#include<fstream>

using namespace std;


// 文本文件 写文件
void test1() {
    // 1、头文件 #include<fstream>

    // 2、创建流对象
    ofstream ofs;

    // 3、指定打开方式，可以使用 | 配合使用，如：ios::out | ios:binary
    //    ios::in	   读文件方式打开
    //	  ios::out     写文件方式打开
    //	  ios::ate     初始位置，文件末尾
    //    ios::app     追加方式写文件
    //    ios:trunc    如果文件存在先删除，再创建
    //    ios:binary   二进制方式
    ofs.open("test.txt", ios::out);

    // 4、写内容
    ofs << "姓名：张三" << endl;
    ofs << "性别：男" << endl;
    ofs << "年龄：20" << endl;

    // 5、关闭文件
    ofs.close();

}

// 文本文件  读文件
void test2() {
    // 1、头文件 #include<fstream>

    // 2、创建流对象
    ifstream ifs;

    // 3、指定打开方式
    ifs.open("test.txt", ios::in);

    // 4、判断是否打开成功
    if (!ifs.is_open()) {
        cout << "打开文件失败" << endl;
        return;
    }

    // 5、读数据
    // 第一种
    char buf[1024] = {0};
    while (ifs >> buf) {
        cout << buf << endl;
    }
    // 第二种
    /*char buf[1024] = { 0 };
    while (ifs.getline(buf, sizeof(buf)))
    {
        cout << buf << endl;
    }*/
    // 第三种
    /*string buf;
    while (getline(ifs, buf))
    {
        cout << buf << endl;
    }*/
    // 第四种
    /*char c;
    while ((c = ifs.get()) != EOF)
    {
        cout << c;
    }*/


    // 6、关闭文件
    ifs.close();

}

// 二进制数据对象
class Person {
public:
    char m_name[64]; // 姓名
    int m_age; // 年龄

};

// 二进制 写文件
void test3() {
    // 1、头文件 #include<fstream>

    // 2、创建流对象
    ofstream ofs;

    // 3、指定打开方式
    ofs.open("person.txt", ios::out | ios::binary);

    // 4、写文件数据
    Person p = {"张三", 20};
    ofs.write((const char *) &p, sizeof(Person));

    // 5、关闭文件
    ofs.close();
}

// 二进制 读文件
void test4() {
    // 1、头文件 #include<fstream>

    // 2、创建流对象
    ifstream ifs;

    // 3、指定打开方式
    ifs.open("person.txt", ios::in | ios::binary);

    // 4、判断是否打开成功
    if (!ifs.is_open()) {
        cout << "打开文件失败" << endl;
        return;
    }

    // 5、读文件数据
    Person p;
    ifs.read((char *) &p, sizeof(Person));
    cout << "姓名：" << p.m_name << " 年龄：" << p.m_age << endl;

    // 6、关闭文件
    ifs.close();
}


int main() {
    // 文本文件
    //test1();
    //test2();

    // 二进制
    //test3();
    test4();
}