#include"mesh.h"
#include"mediator.h"

int main(void)
{
	CMediator* pmediator = new CMediator();
	CMeshA *mesha = new CMeshA(pmediator);
	CMeshB *meshb = new CMeshB(pmediator);

	pmediator->setmesha(mesha);
	pmediator->setmeshb(meshb);

	mesha->send("Hello B,I am A");
	meshb->send("Hello A,I am B");

	delete pmediator;
	delete mesha;
	delete meshb;

	return 0;
}
