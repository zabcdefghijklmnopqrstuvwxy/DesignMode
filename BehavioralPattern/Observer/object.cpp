#include<iostream>
#include"object.h"

using namespace std;

namespace OBJECT
{
	CObject::CObject()
	{

	}

	CObject::~CObject()
	{

	}

	void CObject::attach(CObserver* observer)
	{
		if(observer)
		{
			m_list.push_back(observer);
		}
	}

	void CObject::detach(CObserver* observer)
	{
		if(observer)
		{
			m_list.remove(observer);
		}
	}

	void CObject::setstate(unsigned int state)
	{
		this->state = state;
	}

	void CObject::notify(void)
	{
		list<CObserver*>::iterator ite;
		
		for(ite = m_list.begin(); ite != m_list.end(); ite++)
		{
			(*ite)->update(state);
		}
	}
}
