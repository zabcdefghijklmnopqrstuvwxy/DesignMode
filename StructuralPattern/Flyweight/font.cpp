#include"font.h"


namespace FONT
{
CFont::CFont()
{

}

CFont::~CFont()
{

}


CFontA::CFontA()
{
	m_font = "fontA";
	m_weight = 200;
	m_height = 300;
}

CFontA::~CFontA()
{

}

void CFontA::SetSize(int height,int weight)
{
	this->m_weight = weight;
	this->m_height = height;
}

void CFontA::Display(void)
{
	cout << m_font << "(" << m_weight << "," << m_height << ")" << endl;
}

CFontB::CFontB()
{
	m_font = "fontB";
	m_weight = 200;
	m_height = 300;
}

CFontB::~CFontB()
{

}

void CFontB::SetSize(int height,int weight)
{
	this->m_weight = weight;
	this->m_height = height;
}

void CFontB::Display(void)
{
	cout << m_font << "(" << m_weight << "," << m_height << ")" << endl;
}

}

