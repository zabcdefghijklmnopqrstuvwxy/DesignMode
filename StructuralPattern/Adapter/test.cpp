#include "user.h"
#include "adapter.h"

using namespace USER;
using namespace ADAPTER;

int main(void)
{
	CUserB *userb = new CUserB;

	CUserA *usera = new CAdapter(userb);

	usera->display();

	delete userb;
	delete usera;

	return 0;
}
