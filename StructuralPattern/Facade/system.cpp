#include<iostream>
#include"system.h"
using namespace std;
namespace SYSTEM
{
	CSystemA::CSystemA()
	{

	}

	CSystemA::~CSystemA()
	{

	}

	void CSystemA::OperateA(void)
	{
		cout << "operation is system A" << endl;
	}

	CSystemB::CSystemB()
	{

	}

	CSystemB::~CSystemB()
	{

	}

	void CSystemB::OperateB(void)
	{
		cout << "operation is system B" << endl;
	}

	CSystemC::CSystemC()
	{

	}

	CSystemC::~CSystemC()
	{

	}

	void CSystemC::OperateC(void)
	{
		cout << "operation is system C" << endl;
	}
}
