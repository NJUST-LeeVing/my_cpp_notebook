#pragma once
#include<iostream>
using namespace std;
#include"CPU����ͷ�ļ�.h"
#include"�ڴ����ͷ�ļ�.h"
#include"�Կ�����ͷ�ļ�.h"

class IntelCPU:public CPU
{
public:
	void dowork();
};

class IntelMemory:public Memory
{
public:
	void dowork();
};

class IntelVideoCard:public VideoCard
{
public:
	void dowork();
	
};