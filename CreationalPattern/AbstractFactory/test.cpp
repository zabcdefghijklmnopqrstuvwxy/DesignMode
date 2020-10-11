#include"factory.h"
#include"mouse.h"
#include"keyboard.h"

using namespace FACTORY;
using namespace MOUSE;
using namespace KEYBOARD;

int main(void)
{
	CHWFactory hw;
	CHPFactory hp;

	AbstractMouse* hwm = hw.CreateMouse();
	AbstractKeyboard* hwk = hw.CreateKeyboard();

	AbstractMouse* hpm = hp.CreateMouse();
	AbstractKeyboard* hpk = hp.CreateKeyboard();

	hwm->show();
	hwk->show();

	hpm->show();
	hpk->show();

	delete hwm;
	delete hwk;
	delete hpm;
	delete hpk;

	return 0;
}

