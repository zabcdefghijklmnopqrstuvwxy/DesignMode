#pragma once
#include "color.h"

using namespace std;
using namespace COLOR;

namespace PEN
{
	class CPen
	{
	public:
		CPen();
		~CPen();
		virtual void draw(string name) = 0;
		virtual void setcolor(CColor *color);
	public:
		string pentype;
		CColor *m_color;
	};

	class CPencil:public CPen
	{
	public:
		CPencil();
		~CPencil();

		void draw(string name);
	};

	class CFountain:public CPen
	{
	public:
		CFountain();
		~CFountain();

		void draw(string name);
	};

}
