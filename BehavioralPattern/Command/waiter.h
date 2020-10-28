#pragma once
#include "cmd.h"
#include<vector>

using namespace std;
using namespace CMD;

namespace WAITER
{
	class CWaiter
	{
	public:
		CWaiter();
		~CWaiter();

		void SetCmd(CCmd *cmd);
		void Notify(void);

	private:
		vector<CCmd*> rcmd;
	};	
}
