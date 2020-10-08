#include<iostream>
using namespace std;
#include"电脑基类头文件.h"
#include"Intel工厂.h"
#include"Lenovo工厂.h"


void test01()
{
	//拿取零件+组装
	//Computer *c(LenovoCPU *c,IntelMemory *m,IntelVideoCard *vc);
	Computer *c1=new Computer(new LenovoCPU,new IntelMemory,new LenovoVideoCard);
	c1->dowork();

	Computer *c2=new Computer(new IntelCPU,new IntelMemory,new IntelVideoCard);
	c2->dowork();
}



int main()
{
	test01();

	system("pause");

	return 0;

}