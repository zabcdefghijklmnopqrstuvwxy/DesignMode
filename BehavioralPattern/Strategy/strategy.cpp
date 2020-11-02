#include<iostream>
#include"strategy.h"

using namespace std;

namespace STRATEGY
{
	CStrategy::CStrategy()
	{

	}

	CStrategy::~CStrategy()
	{

	}

	CStrategyA::CStrategyA()
	{

	}

	CStrategyA::~CStrategyA()
	{

	}

	void CStrategyA::algorithm(void)
	{
		cout << "call A algorithm method" << endl;
	}

	CStrategyB::CStrategyB()
	{

	}

	CStrategyB::~CStrategyB()
	{

	}

	void CStrategyB::algorithm(void)
	{
		cout << "call B algorithm method" << endl;
	}
}


