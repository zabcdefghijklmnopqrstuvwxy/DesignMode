#pragma once
#include<iostream>
using namespace std;
namespace COLOR
{
	class CColor
	{
	public:
		CColor();
		~CColor();		

		virtual string  getcolor(void) = 0; 
	};

	class CRed:public CColor
	{
	public:
		CRed();
		~CRed();		

		string  getcolor(void); 
	};
	
	class CBlue:public CColor
	{
	public:
		CBlue();
		~CBlue();		

		string  getcolor(void); 
	};
}
