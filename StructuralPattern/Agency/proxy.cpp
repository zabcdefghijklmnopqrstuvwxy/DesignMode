#include<iostream>
#include "proxy.h"

using namespace std;

namespace PROXY
{
	CProxy::CProxy()
	{
		m_subject = new CRealSubject();
	}

	CProxy::~CProxy()
	{
		delete m_subject;
	}

	void CProxy::Request(void)
	{
		cout << "proxy call real object function" << endl;
		m_subject->Request();
	}
}
