#pragma once
#include<iostream>
using namespace std;
#include"CPU����ͷ�ļ�.h"
#include"�ڴ����ͷ�ļ�.h"
#include"�Կ�����ͷ�ļ�.h"

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