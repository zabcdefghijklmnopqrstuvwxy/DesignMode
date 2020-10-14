#include<iostream>
#include "user.h"

using namespace std;

namespace USER
{
	CUserA::CUserA()
	{

	}

	CUserA::~CUserA()
	{

	}

	void CUserA::display(void)
	{
		cout << "this is display user a" << endl;
	}	

	CUserB::CUserB()
	{

	}

	CUserB::~CUserB()
	{

	}

	void CUserB::show(void)
	{
		cout << "this is show user b" << endl;
	}	
}
