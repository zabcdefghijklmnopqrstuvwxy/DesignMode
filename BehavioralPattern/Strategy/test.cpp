#include"context.h"
#include"strategy.h"

using namespace CONTEXT;
using namespace STRATEGY;

int main(void)
{
	CStrategy* csa = new CStrategyA();
	CStrategy* csb = new CStrategyB();
	
	CContext *cona = new CContext(csa);
	CContext *conb = new CContext(csb);

	cona->interface();
	conb->interface();

	delete cona;
	delete conb;

	return 0;
}
