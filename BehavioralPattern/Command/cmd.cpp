#include "cmd.h"

namespace CMD
{
	CCmd::CCmd()
	{

	}

	CCmd::~CCmd()
	{

	}

	CCmdMutton::CCmdMutton()
	{
		m_roastcook = new CRoastcook;
	}
	
	CCmdMutton::~CCmdMutton()
	{
		delete m_roastcook;
	}

	void CCmdMutton::ExcueteCmd(void)
	{
		m_roastcook->MakeMutton();
	}

	CCmdHam::CCmdHam()
	{
		m_roastcook = new CRoastcook;
	}
	
	CCmdHam::~CCmdHam()
	{
		delete m_roastcook;
	}

	void CCmdHam::ExcueteCmd(void)
	{
		m_roastcook->MakeHam();
	}
}


