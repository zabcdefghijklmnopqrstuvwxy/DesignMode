#include"facade.h"
using namespace FACADE;

int main(void)
{
	CFacade *facade = new CFacade();

	facade->WrapOpration();

	delete facade;

	return 0;
}
