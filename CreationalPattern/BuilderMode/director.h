#pragma once

#include "build.h"
using namespace BUILD;

namespace DIRECTOR
{
	class CDirector
	{
	public:
		CDirector();
		~CDirector();

		void Assemble(AstractBuild *build);
	};

}
