#pragma once

#include"strategy.h"

using namespace STRATEGY;

namespace CONTEXT
{
	class CContext
	{
	public:
		CContext(CStrategy *p):m_strategy(p)
		{

		}

		~CContext();
		void interface(void);		
	
	private:	
		CStrategy *m_strategy;		
	};
}
