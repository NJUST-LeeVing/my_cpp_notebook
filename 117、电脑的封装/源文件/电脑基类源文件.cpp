#include"电脑基类头文件.h"

Computer::Computer(CPU *c,Memory *m,VideoCard *vc)
{
	m_c=c;
	m_m=m;
	m_vc=vc;
}

void Computer::dowork()
{
	m_c->dowork();
	m_m->dowork();
	m_vc->dowork();
}