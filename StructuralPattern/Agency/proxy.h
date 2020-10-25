#pragma once

#include"subject.h"

using namespace SUBJECT;

namespace PROXY
{
	class CProxy:public CSubject
	{
	public:
		CProxy();
		~CProxy();
				
		void Request(void);
	private:
		CRealSubject *m_subject;
	};
}
