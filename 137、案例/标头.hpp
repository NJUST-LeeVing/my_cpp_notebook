/*��ģ��ĳ�Ա�����ڵ��õ�ʱ��Ŵ����������Ҫ��������ʵ��д��һ���ļ��У�������׺����Ϊ .hpp
*/
#pragma once
#include<iostream>
using namespace std;


template<class T>
class MyArray
{
public:
	//�вι��캯��  ����Ϊ����
	MyArray(int capacity)
	{
		cout << "�вι��캯���ĵ��ã�" << endl;
		this->m_Capacity = capacity;//�������������
		this->m_Size = 0;//��ʼ������������
		this->pAddress = new T[this->m_Capacity];//��������һ������
	}

	//�������캯��
	MyArray(const MyArray& arr)
	{
		cout << "�������캯���ĵ��ã�" << endl;
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		//this->pAddress = arr.pAddress;ǳ����
		//�������
		this->pAddress = new T[arr.m_Capacity];//��������һ����������ΪT�����飬���ó�Աָ��pAddressָ������ڴ档ע�⣺��ʱ��������������Ĵ�С����������������������������������
		//���arr���Ѿ��в������ݣ���Ҫ��arr�е����ݶ����п���
		for (int i = 0; i < this->m_Size; i++)
		{
			this->pAddress[i] = arr.pAddress[i];//pAddress�Ǵ��ָ�������
		}
	}
	
	//operator= �Ϳ�����������һ��
	MyArray& operator=(const MyArray& arr)
	{
		cout << "operator=�����ĵ��ã�" << endl;
		if (this->pAddress != NULL)//����������ã�
		{
			delete[]pAddress;
			delete m_Capacity;
			delete m_Size;

		}
		//���
		this->m_Capacity = arr.m_Capacity;
		this->m_Size = arr.m_Size;
		this->pAddress = new T[m_Capacity];
		for (int i = 0; i < this->m_Size; i++)
		{
			this->pAddress[i] = arr.pAddress[i];
		}
		return *this;
	}

	//β�巨(��Ϊ)
	void PushBack(const T& val)
	{

		if (this->m_Capacity == m_Size)
		{
			cout << "�ڴ治�㣬�޷���ӣ�" << endl;
		}
		this->pAddress[this->m_Size] = val;//������ĩβ��������    Ϊʲô������
		this->m_Size++;//��������Ĵ�С
	}
	
	//βɾ�������û��޷��������һ��Ԫ�ؼ���
	void PopBack()
	{
		if (this->m_Size == 0)
		{
			return;
		}
		this->m_Size--;
	}

	//ͨ���±귽ʽ���������е�Ԫ��
	T& operator[](int index)
	{
		return this->pAddress[index];
	}

	//�������������
	int GetCapacity()
	{
		return this->m_Capacity;
	}

	//��������Ĵ�С
	int GetSize()
	{
		return this->m_Size;
	}

	//��������
	~MyArray()
	{
		cout << "���������ĵ��ã�" << endl;
		if (this->pAddress != NULL)
		{
			delete[] this->pAddress;//ɾ������ָ�룬Ҫд[]
			pAddress = NULL;
		}

	}

private:

	int m_Size;//�����С(�仯)
	int m_Capacity;//��������(�㶨)
	T* pAddress;//ָ��ָ��������ٵ���ʵ����

};
