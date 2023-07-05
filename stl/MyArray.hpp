#pragma once
#include<iostream>
using namespace std;


template<class T>
class  MyArray
{
public:
	// �вι���
	MyArray(int capacity) 
	{
		cout << "�вι��캯��" << endl;
		this->m_capacity = capacity;
		this->m_size = 0;
		this->m_arr = new T[capacity];
	}
	// ��������
	MyArray(const MyArray& arr)
	{
		cout << "�������캯��" << endl;
		this->m_capacity = arr.m_capacity;
		this->m_size = arr.m_size;
		//this->m_arr = arr.m_arr;

		// ���
		this->m_arr = new T[arr.m_capacity];
		// �� arr �е����ݶ���������
		for (int i = 0; i < this->m_size; i++)
		{
			this->m_arr[i] = arr.m_arr[i];
		}
	}
	// operator= ��ֹǳ��������
	MyArray& operator=(const MyArray& arr) 
	{
		cout << "operator=��ֹǳ�������⺯��" << endl;
		// ���ж�ԭ�������Ƿ������ݣ���������ͷ�
		if (this->m_arr != NULL)
		{
			delete[] this->m_arr;
			this->m_arr = NULL;
			this->m_capacity = 0;
			this->m_size = 0;
		}

		// ���
		this->m_capacity = arr.m_capacity;
		this->m_size = arr.m_size;
		this->m_arr = new T[this->m_capacity];
		for (int i = 0; i < this->m_size; i++)
		{
			this->m_arr[i] = arr.m_arr[i];
		}
		return *this;
	}
	//��������
	 ~MyArray() 
	 {
		 cout << "��������" << endl;
		 if (this->m_arr != NULL)
		 {
			 delete[] this->m_arr;
			 this->m_arr = NULL;
		 }
	}

	 // β�巨
	 void push_back(const T &val) {
		 // �ж������Ƿ���ڴ�С
		 if (this->m_capacity == this->m_size)
		 {
			 return;
		 }
		 this->m_arr[this->m_size] = val;
		 this->m_size++;
	 }

	 // βɾ��
	 void pop_back() {
		 if (this->m_size > 0)
		 {
			 this->m_size--;
		 }
	 }

	 // �±���������е�Ԫ��
	 T& operator[](int index) {
		 return this->m_arr[index];
	 }

	 // ��������
	 int getCapacity() {
		 return this->m_capacity;
	 }

	 // �������
	 int getSize() {
		 return this->m_size;
	 }

	 // ��ӡ���
	 void printArray() {
		 for (size_t i = 0; i < this->m_size; i++)
		 {
			 cout << this->m_arr[i] << "    ";
		 }
		 cout << endl;
	 }

private:
	T* m_arr;
	int m_capacity;
	int m_size;
};


