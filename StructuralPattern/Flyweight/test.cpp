#include"factory.h"
#include"font.h"

using namespace FONT;
using namespace  FACTORY;

int main(void)
{
	CFactory factory;

	CFont *fontA = factory.GetProduct("fontA");
	CFont *fontB = factory.GetProduct("fontB");


	fontA->Display();
	
	fontB->SetSize(100,100);
	fontB->Display();

	return 0;
}
