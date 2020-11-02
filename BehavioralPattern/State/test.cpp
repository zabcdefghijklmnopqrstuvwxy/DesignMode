#include"state.h"
#include"frogprince.h"

using namespace STATE;
using namespace FROGPRINCE;

int main(void)
{
	CFrogprince *p = new CFrogprince();

	p->say();
	p->kiss();
	p->say();
	p->curse();
	p->say();

	delete p;		

	return 0;
}
