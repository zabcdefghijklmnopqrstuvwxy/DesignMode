#include"frogprince.h"

namespace FROGPRINCE
{
	CFrogprince::CFrogprince()
	{
		state = new CFrogstate();
	}

	CFrogprince::~CFrogprince()
	{
		delete state;
	}

	void CFrogprince::kiss(void)
	{
		delete state;
		state = new CPrincestate();
	}

	void CFrogprince::curse(void)
	{
		delete state;
		state = new CFrogstate();
	}

	void CFrogprince::say(void)
	{
		state->say();
	}
}
