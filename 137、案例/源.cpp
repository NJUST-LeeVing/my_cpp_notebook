#include<iostream>
using namespace std;
#include"��ͷ.hpp"
#include<string>
/*����������
���Զ����õ����������Լ��Զ����������͵����ݽ��д洢
�������е����ݴ洢������
���캯���п��Դ������������
�ṩ����Ŀ������캯���Լ�operator=��ֹǳ��������
�ṩβ�巨��βɾ���������е����ݽ������Ӻ�ɾ��
����ͨ���±�ķ�ʽ���������е�Ԫ��
���Ի�ȡ�����е�ǰԪ�ظ��������������
*/

//��ӡ ����
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
		//����β�巨�������в�������
		arr1.PushBack(i);
	
	}
	cout << "arr1�Ĵ�ӡ���Ϊ��" << endl;
	Print(arr1);

	cout << "arr1������Ϊ��"<<arr1.GetCapacity()<<endl;
	cout << "arr1������Ϊ��" << arr1.GetSize() << endl;

	MyArray<int>arr2(3);
	for (int i = 0; i < 3; i++)
	{
		arr2.PushBack(i);
	}
	//βɾ��
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
		cout << "������" << arr[i].m_Name << "  ���䣺" << arr[i].m_Age << endl;
	
	}
}


void test02()
{
	MyArray<Person>arr(10);//��������
	Person p1("�����", 100);
	Person p2("��˽�", 90);
	Person p3("ɳ����", 70);
	//�����ݲ��뵽������
	arr.PushBack(p1);
	arr.PushBack(p2);
	arr.PushBack(p3);

	//��ӡ����
	Print2(arr);

	//�������
	cout << "arr����Ϊ��" << arr.GetCapacity() << endl;

	//�����С
	cout << "arr��СΪ��" << arr.GetSize() << endl;
}


int main()
{
	test01();
	test02();
	system("pause");

	return 0;
}