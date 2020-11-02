#include<iostream>
#include"state.h"

using namespace std;

namespace STATE
{
	CState::CState()
	{

	}

	CState::~CState()
	{

	}

	CFrogstate::CFrogstate()
	{

	}

	CFrogstate::~CFrogstate()
	{

	}

	void CFrogstate::say(void)
	{
		cout << "呱 呱 呱" << endl;
	}

	CPrincestate::CPrincestate()
	{

	}

	CPrincestate::~CPrincestate()
	{

	}

	void CPrincestate::say(void)
	{
		cout << "美丽的公主，我爱你!" << endl;
	}
}
