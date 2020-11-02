#pragma once

#include<iostream>
#include<list>
#include"observer.h"

using namespace std;
using namespace OBSERVER;

namespace OBJECT
{
	class CObject
	{	
	public:
		CObject();
		~CObject();
				
		void attach(CObserver* observer);
		void detach(CObserver* observer);	
		
		void setstate(unsigned int state);
		void notify(void);
	
	private:
		list<CObserver*> m_list;		
		unsigned int state;
	};
}
