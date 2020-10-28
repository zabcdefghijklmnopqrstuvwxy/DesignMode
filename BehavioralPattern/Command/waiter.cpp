#include"waiter.h"

namespace WAITER
{
	CWaiter::CWaiter()
	{
		rcmd.clear();
	}

	CWaiter::~CWaiter()
	{

	}

	void CWaiter::SetCmd(CCmd *cmd)
	{
		rcmd.push_back(cmd);
	}	

	void CWaiter::Notify(void)
	{
		vector<CCmd*>::iterator ite = rcmd.begin();

		while(ite != rcmd.end())
		{
			CCmd *pcmd = *ite;
			pcmd->ExcueteCmd();
			ite = rcmd.erase(ite);
			delete pcmd;	
		}
	}
}

