#include "single.h"
#include<iostream>
using namespace std;

namespace SINGLE
{
	CSingle* CSingle::m_instance = NULL;

	CSingle::~CSingle()
	{

	}

	CSingle* CSingle::GetInstance(void)
	{
		if(NULL == m_instance)
		{
			return new CSingle;
		}
		
		return m_instance;
	}


	void CSingle::display(void)
	{
		cout << "this is single mode" << endl;
	}

}
