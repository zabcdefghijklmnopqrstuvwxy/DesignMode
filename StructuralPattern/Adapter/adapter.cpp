#include "adapter.h"

namespace ADAPTER
{
	CAdapter::CAdapter(CUserB* user):m_userb(user)
	{
		
	}
	
	CAdapter::~CAdapter()
	{

	}

	void CAdapter::display(void)
	{
		m_userb->show();
	}

}
