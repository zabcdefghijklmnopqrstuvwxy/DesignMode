#include"object.h"
#include"observer.h"

using namespace OBJECT;
using namespace OBSERVER;

int main(void)
{
	CObject *obj = new CObject();

	CObserver *sera = new CObserverA();
	CObserver *serb = new CObserverB();

	obj->attach(sera);
	obj->attach(serb);

	obj->setstate(18);
	obj->notify();

	obj->detach(sera);	
	obj->detach(serb);	

	delete sera;
	delete serb;

	delete obj;

	return 0;
}
