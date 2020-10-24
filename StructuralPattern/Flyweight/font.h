#pragma once

#include<iostream>
using namespace std;

namespace FONT
{
	class CFont
	{
	public:
		CFont();
		~CFont();
		virtual void SetSize(int height,int weight) = 0;
		virtual void Display(void) = 0;	
	protected:				
		string m_font;
		int m_weight;
		int m_height;
	};

	class CFontA:public CFont
	{
	public:
		CFontA();
		~CFontA();

		void SetSize(int height,int weight);
		void  Display(void);	
	};

	class CFontB:public CFont
	{
	public:
		CFontB();
		~CFontB();

		void SetSize(int height,int weight);
		void  Display(void);	
	};
}
