#include "director.h"

namespace DIRECTOR
{
	CDirector::CDirector()
	{

	}

	CDirector::~CDirector()
	{

	}

	void CDirector::Assemble(AstractBuild *build)
	{
		build->BuildCamera();
		build->BuildScreen();
		build->BuildEarphone();
	}
}
