#include "context.h"

namespace CONTEXT
{
	CContext::~CContext()
	{
		if(m_strategy)
		{
			delete m_strategy;
		}
	}

	void CContext::interface(void)
	{
		if(m_strategy)
		{
			m_strategy->algorithm();
		}
	}
}
