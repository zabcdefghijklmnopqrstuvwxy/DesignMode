#pragma once
#include "user.h"

using namespace USER;

namespace ADAPTER
{
	class CAdapter:public CUserA
	{
	public:
		CAdapter(CUserB *user);
		~CAdapter();

		virtual void display(void);

	private:
		CUserB *m_userb;
	};
}
