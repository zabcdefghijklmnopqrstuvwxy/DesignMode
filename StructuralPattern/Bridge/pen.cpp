#include<iostream>
#include"pen.h"

namespace PEN
{
	CPen::CPen()
	{
		pentype = "pen";
	}

	CPen::~CPen()
	{

	}

	void CPen::setcolor(CColor *color)
	{
		this->m_color = color;
	}
	

	CPencil::CPencil()
	{
		pentype = "pencil";
	}

	CPencil::~CPencil()
	{

	}

	void CPencil::draw(string name)
	{
		cout << "using " << pentype << " by " << this->m_color->getcolor() << " draw " <<  name << endl;
	}
	
	CFountain::CFountain()
	{
		pentype = "fountain";
	}

	CFountain::~CFountain()
	{

	}

	void CFountain::draw(string name)
	{
		cout << "using " << pentype << " by " << this->m_color->getcolor() << " draw " <<  name << endl;
	}
}


