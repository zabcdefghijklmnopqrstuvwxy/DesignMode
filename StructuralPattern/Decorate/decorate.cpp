#include<iostream>
#include"food.h"
#include"decorate.h"

using namespace FOOD;
using namespace std;

namespace DECORATE
{
	CDecorate::~CDecorate()
	{

	}

	CSweetdecorate::~CSweetdecorate()
	{

	}

	void CSweetdecorate::addsweet(void)
	{
		cout << "add sweet " << endl;
	}

	void CSweetdecorate::cook(void)
	{
		addsweet();
		m_food->cook();
	}
	
	CSpicydecorate::~CSpicydecorate()
	{

	}

	void CSpicydecorate::addspicy(void)
	{
		cout << "add spicy " << endl;
	}

	void CSpicydecorate::cook(void)
	{
		addspicy();
		m_food->cook();
	}

}
