#pragma once
#include<iostream>
using namespace std;
#include"CPU基类头文件.h"
#include"内存基类头文件.h"
#include"显卡基类头文件.h"

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