#include<iostream>
using namespace std;
#include"���Ի���ͷ�ļ�.h"
#include"Intel����.h"
#include"Lenovo����.h"


void test01()
{
	//��ȡ���+��װ
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