#include"���Ի���ͷ�ļ�.h"

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