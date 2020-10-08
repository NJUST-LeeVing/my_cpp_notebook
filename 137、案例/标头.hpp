/*类模板的成员函数在调用的时候才创建，因此需要将声明和实现写在一个文件中，并将后缀名改为 .hpp
*/
#pragma once
#include<iostream>
using namespace std;


template<class T>
class MyArray
{
public:
	//有参构造函数  参数为容量
	MyArray(int capacity)
	{
		cout << "有参构造函数的调用！" << endl;
		this->m_Capacity = capacity;//设置数组的容量
		this->m_Size = 0;//初始化数组已载量
		this->pAddress = new T[this->m_Capacity];//堆区创建一个数组
	}

	//拷贝构造函数
	MyArray(const MyArray& arr)
	{
		cout << "拷贝构造函数的调用！" << endl;
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		//this->pAddress = arr.pAddress;浅拷贝
		//深拷贝如下
		this->pAddress = new T[arr.m_Capacity];//堆区创建一个数据类型为T的数组，并用成员指针pAddress指向这块内存。注意：此时堆区创建的数组的大小并不是数组的容量，而是数组的已载量。
		//如果arr中已经有部分数据，需要将arr中的内容都进行拷贝
		for (int i = 0; i < this->m_Size; i++)
		{
			this->pAddress[i] = arr.pAddress[i];//pAddress是存放指针的数组
		}
	}
	
	//operator= 和拷贝函数几乎一样
	MyArray& operator=(const MyArray& arr)
	{
		cout << "operator=函数的调用！" << endl;
		if (this->pAddress != NULL)//这玩意儿有用？
		{
			delete[]pAddress;
			delete m_Capacity;
			delete m_Size;

		}
		//深拷贝
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		this->pAddress = new T[m_Capacity];
		for (int i = 0; i < this->m_Size; i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
		return *this;
	}

	//尾插法(行为)
	void PushBack(const T& val)
	{

		if (this->m_Capacity == m_Size)
		{
			cout << "内存不足，无法添加！" << endl;
		}
		this->pAddress[this->m_Size] = val;//在数组末尾插入数据    为什么？？？
		this->m_Size++;//更新数组的大小
	}
	
	//尾删法：让用户无法访问最后一个元素即可
	void PopBack()
	{
		if (this->m_Size == 0)
		{
			return;
		}
		this->m_Size--;
	}

	//通过下标方式访问数组中的元素
	T& operator[](int index)
	{
		return this->pAddress[index];
	}

	//返回数组的容量
	int GetCapacity()
	{
		return this->m_Capacity;
	}

	//返回数组的大小
	int GetSize()
	{
		return this->m_Size;
	}

	//析构函数
	~MyArray()
	{
		cout << "析构函数的调用！" << endl;
		if (this->pAddress != NULL)
		{
			delete[] this->pAddress;//删除数组指针，要写[]
			pAddress = NULL;
		}

	}

private:

	int m_Size;//数组大小(变化)
	int m_Capacity;//数组容量(恒定)
	T* pAddress;//指针指向堆区开辟的真实数组

};
