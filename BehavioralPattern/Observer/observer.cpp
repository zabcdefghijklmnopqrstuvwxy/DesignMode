#include<iostream>
#include"observer.h"

using namespace std;

namespace OBSERVER
{
	CObserver::CObserver()
	{

	}

	CObserver::~CObserver()
	{

	}

	CObserverA::CObserverA()
	{

	}

	CObserverA::~CObserverA()
	{

	}

	void CObserverA::update(unsigned int state)
	{
		cout << "A update state is " << state << endl;
	}

	CObserverB::CObserverB()
	{

	}

	CObserverB::~CObserverB()
	{

	}

	void CObserverB::update(unsigned int state)
	{
		cout << "B update state is " << state << endl;
	}
}
