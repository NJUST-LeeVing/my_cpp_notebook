#include<iostream>
using namespace std;
#include"标头.hpp"
#include<string>
/*案例描述：
可以对内置的数据类型以及自定义数据类型的数据进行存储
将数组中的数据存储到堆区
构造函数中可以传入数组的容量
提供对象的拷贝构造函数以及operator=防止浅拷贝问题
提供尾插法和尾删法对数组中的数据进行增加和删除
可以通过下标的方式访问数组中的元素
可以获取数组中当前元素个数和数组的容量
*/

//打印 函数
void Print(MyArray<int>& arr)
{
	for (int i = 0; i < arr.GetSize(); i++)
	{
		cout << arr[i] << endl;
	}
}


void test01()
{
	MyArray<int>arr1(5);
	
	for (int i = 0; i < 5; i++)
	{
		//利用尾插法向数组中插入数据
		arr1.PushBack(i);
	
	}
	cout << "arr1的打印输出为：" << endl;
	Print(arr1);

	cout << "arr1的容量为："<<arr1.GetCapacity()<<endl;
	cout << "arr1的容量为：" << arr1.GetSize() << endl;

	MyArray<int>arr2(3);
	for (int i = 0; i < 3; i++)
	{
		arr2.PushBack(i);
	}
	//尾删法
	arr2.PopBack();
	Print(arr2);
}


class Person
{
public:
	Person() {}
	Person(string name,int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	string m_Name;
	int m_Age;
};

void Print2(MyArray<Person>& arr)
{
	for (int i = 0; i < arr.GetSize(); i++)
	{
		cout << "姓名：" << arr[i].m_Name << "  年龄：" << arr[i].m_Age << endl;
	
	}
}


void test02()
{
	MyArray<Person>arr(10);//设置容量
	Person p1("孙悟空", 100);
	Person p2("猪八戒", 90);
	Person p3("沙和尚", 70);
	//将数据插入到容器中
	arr.PushBack(p1);
	arr.PushBack(p2);
	arr.PushBack(p3);

	//打印数组
	Print2(arr);

	//输出容量
	cout << "arr容量为：" << arr.GetCapacity() << endl;

	//输出大小
	cout << "arr大小为：" << arr.GetSize() << endl;
}


int main()
{
	test01();
	test02();
	system("pause");

	return 0;
}