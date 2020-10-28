#pragma once
#include"roastcook.h"

using namespace ROASTCOOK;

namespace CMD
{
	class CCmd
	{	
	public:
		CCmd();
		~CCmd();

		virtual void ExcueteCmd(void) = 0;
	protected:
		CRoastcook *m_roastcook;		

	};

	class CCmdMutton:public CCmd
	{
	public:
		CCmdMutton();
		~CCmdMutton();
		void ExcueteCmd(void);

	};		

	class CCmdHam:public CCmd
	{
	public:
		CCmdHam();
		~CCmdHam();
		void ExcueteCmd(void);
	};		
}
