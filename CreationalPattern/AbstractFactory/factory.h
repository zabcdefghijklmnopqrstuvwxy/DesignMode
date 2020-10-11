#pragma once
#include"mouse.h"
#include"keyboard.h"

using namespace MOUSE;
using namespace KEYBOARD;

namespace FACTORY
{
	class AbstractFactory
	{
	public:
		AbstractFactory();
		~AbstractFactory();
		virtual AbstractKeyboard* CreateKeyboard(void) = 0;
		virtual AbstractMouse* CreateMouse(void) = 0;
	};

	class CHWFactory:public AbstractFactory
	{
	public:
		CHWFactory();
		~CHWFactory();

		AbstractKeyboard* CreateKeyboard(void);
		AbstractMouse* CreateMouse(void);
	};

	class CHPFactory:public AbstractFactory
	{
	public:
		CHPFactory();
		~CHPFactory();

		AbstractKeyboard* CreateKeyboard(void);
		AbstractMouse* CreateMouse(void);
	};
}
