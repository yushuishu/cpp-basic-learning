#pragma once

#include<iostream>

using namespace std;


template<class T>
class MyArray {
public:
    // 有参构造
    MyArray(int capacity) {
        cout << "有参构造函数" << endl;
        this->m_capacity = capacity;
        this->m_size = 0;
        this->m_arr = new T[capacity];
    }

    // 拷贝构造
    MyArray(const MyArray &arr) {
        cout << "拷贝构造函数" << endl;
        this->m_capacity = arr.m_capacity;
        this->m_size = arr.m_size;
        //this->m_arr = arr.m_arr;

        // 深拷贝
        this->m_arr = new T[arr.m_capacity];
        // 将 arr 中的数据都拷贝出来
        for (int i = 0; i < this->m_size; i++) {
            this->m_arr[i] = arr.m_arr[i];
        }
    }

    // operator= 防止浅拷贝问题
    MyArray &operator=(const MyArray &arr) {
        cout << "operator=防止浅拷贝问题函数" << endl;
        // 先判断原来堆区是否有数据，如果有先释放
        if (this->m_arr != NULL) {
            delete[] this->m_arr;
            this->m_arr = NULL;
            this->m_capacity = 0;
            this->m_size = 0;
        }

        // 深拷贝
        this->m_capacity = arr.m_capacity;
        this->m_size = arr.m_size;
        this->m_arr = new T[this->m_capacity];
        for (int i = 0; i < this->m_size; i++) {
            this->m_arr[i] = arr.m_arr[i];
        }
        return *this;
    }

    //析构函数
    ~MyArray() {
        cout << "析构函数" << endl;
        if (this->m_arr != NULL) {
            delete[] this->m_arr;
            this->m_arr = NULL;
        }
    }

    // 尾插法
    void push_back(const T &val) {
        // 判断容量是否等于大小
        if (this->m_capacity == this->m_size) {
            return;
        }
        this->m_arr[this->m_size] = val;
        this->m_size++;
    }

    // 尾删法
    void pop_back() {
        if (this->m_size > 0) {
            this->m_size--;
        }
    }

    // 下标访问数组中的元素
    T &operator[](int index) {
        return this->m_arr[index];
    }

    // 数组容量
    int getCapacity() {
        return this->m_capacity;
    }

    // 数组大下
    int getSize() {
        return this->m_size;
    }

    // 打印输出
    void printArray() {
        for (size_t i = 0; i < this->m_size; i++) {
            cout << this->m_arr[i] << "    ";
        }
        cout << endl;
    }

private:
    T *m_arr;
    int m_capacity;
    int m_size;
};


