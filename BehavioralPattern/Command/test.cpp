#include"waiter.h"
#include"cmd.h"
#include"roastcook.h"

using namespace CMD;
using namespace WAITER;

int main(void)
{	
	CCmd *cmd1 = new CCmdMutton;
	CCmd *cmd2 = new CCmdHam;

	CWaiter *girl = new CWaiter;

	girl->SetCmd(cmd1);
	girl->SetCmd(cmd2);

	girl->Notify();

	delete girl;

	return 0;
}

