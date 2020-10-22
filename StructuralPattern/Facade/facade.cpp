#include"facade.h"

namespace FACADE
{
	CFacade::CFacade()
	{
		m_systema = new CSystemA();
		m_systemb = new CSystemB();
		m_systemc = new CSystemC();
	}

	CFacade::~CFacade()
	{
		delete m_systema;
		delete m_systemb;
		delete m_systemc;
	}

	void CFacade::WrapOpration(void)
	{
		m_systema->OperateA();
		m_systemb->OperateB();		
		m_systemc->OperateC();		
	}
}
