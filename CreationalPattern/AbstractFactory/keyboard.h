#pragma once
namespace KEYBOARD
{
	class AbstractKeyboard
	{
	public:
		AbstractKeyboard();
		~AbstractKeyboard();
		virtual void show(void) = 0;
	};

	class CHWKeyboard:public AbstractKeyboard
	{
	public:
		CHWKeyboard();
		~CHWKeyboard();
		void show(void);
	};

	class CHPKeyboard:public AbstractKeyboard
	{
	public:
		CHPKeyboard();
		~CHPKeyboard();
		void show(void);
	};

}
