#pragma once

#include "system.h"
using namespace SYSTEM;

namespace FACADE
{
	class CFacade
	{
	public:
		CFacade();
		~CFacade();	
		void WrapOpration(void);
	private:
		CSystemA *m_systema;
		CSystemB *m_systemb;
		CSystemC *m_systemc;
	};
}
