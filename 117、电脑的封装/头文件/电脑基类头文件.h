#pragma once
#include<iostream>
using namespace std;
#include"CPU基类头文件.h"
#include"内存基类头文件.h"
#include"显卡基类头文件.h"

class Computer
{
public:
	Computer(CPU *c,Memory *m,VideoCard *vc);

	//工作函数
	void dowork();

private:
	CPU *m_c;
	Memory *m_m;
	VideoCard *m_vc;
};