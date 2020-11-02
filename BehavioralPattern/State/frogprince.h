#pragma once

#include"state.h"

using namespace STATE;

namespace FROGPRINCE
{
	class CFrogprince
	{	
	public:
		CFrogprince();
		~CFrogprince();

		void kiss(void);
		void curse(void);
		void say(void);	
	
	private:
		CState *state;
	};
}
