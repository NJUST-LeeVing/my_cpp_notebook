#pragma once
#include<iostream>
using namespace std;
#include"CPU����ͷ�ļ�.h"
#include"�ڴ����ͷ�ļ�.h"
#include"�Կ�����ͷ�ļ�.h"

class Computer
{
public:
	Computer(CPU *c,Memory *m,VideoCard *vc);

	//��������
	void dowork();

private:
	CPU *m_c;
	Memory *m_m;
	VideoCard *m_vc;
};