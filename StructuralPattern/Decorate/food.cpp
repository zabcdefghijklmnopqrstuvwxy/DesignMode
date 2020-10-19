#include<iostream>
#include"food.h"

using namespace std;

namespace FOOD
{
	CFood::CFood()
	{

	}

	CFood::~CFood()
	{

	}

	CMeat::CMeat()
	{

	}

	CMeat::~CMeat()
	{

	}

	void CMeat::cook(void)
	{
		cout << " cook meat " << endl;
	}

	CFish::CFish()
	{

	}

	CFish::~CFish()
	{

	}

	void CFish::cook(void)
	{
		cout << " cook fish " << endl;
	}
}
