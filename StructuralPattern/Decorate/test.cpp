#include"food.h"
#include"decorate.h"

using namespace FOOD;
using namespace DECORATE;

int main(void)
{
	CFish *fish = new CFish();
	CMeat *meat = new CMeat();

	CSpicydecorate *spicy = new CSpicydecorate(fish);	
	CSweetdecorate *sweet = new CSweetdecorate(meat);	

	spicy->cook();
	sweet->cook();

	delete fish;
	delete meat;
	delete spicy;
	delete sweet; 

	return 0;
}
