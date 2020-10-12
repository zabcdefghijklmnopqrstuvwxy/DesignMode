#include "phone.h"
#include "build.h"
#include "director.h"

using namespace PHONE;
using namespace BUILD;
using namespace DIRECTOR;


int main(void)
{
	AstractBuild *hw = new HwBuild();
	AstractBuild *vivo = new VivoBuild;

	CDirector dir;
	
	dir.Assemble(hw);
	dir.Assemble(vivo);

	hw->GetPhone()->display();
	vivo->GetPhone()->display();

	return 0;
}
