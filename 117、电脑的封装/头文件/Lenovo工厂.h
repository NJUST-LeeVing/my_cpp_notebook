#pragma once
#include<iostream>
using namespace std;
#include"CPU基类头文件.h"
#include"内存基类头文件.h"
#include"显卡基类头文件.h"

class LenovoCPU:public CPU
{
public:
	void dowork();

};

class LenovoMemory:public Memory
{
public:
	void dowork();

};

class LenovoVideoCard:public VideoCard
{
public:
	void dowork();

};