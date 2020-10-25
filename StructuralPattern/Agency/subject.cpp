#include<iostream>
#include"subject.h"

using namespace std;
namespace SUBJECT
{
	CSubject::CSubject()
	{

	}

	CSubject::~CSubject()
	{

	}
	
	CRealSubject::CRealSubject()
	{

	}

	CRealSubject::~CRealSubject()
	{

	}

	void CRealSubject::Request(void)
	{
		cout << "real request operation" << endl;
	}	

}
