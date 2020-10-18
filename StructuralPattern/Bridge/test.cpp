#include"pen.h"
#include "color.h"

using namespace PEN;
using namespace COLOR;

int main(void)
{
	CPen *pen = new CPencil();
	CColor *color = new CRed();

	pen->setcolor(color);
	pen->draw("pig");	

	delete pen;
	delete color;	

	return 0;
}
