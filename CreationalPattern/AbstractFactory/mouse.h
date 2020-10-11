#pragma once
namespace MOUSE
{
	class AbstractMouse
	{
	public:
		AbstractMouse();
		~AbstractMouse();
		virtual void show(void) = 0;	
	};
	
	class CHWMouse:public AbstractMouse
	{
	public:
		CHWMouse();
		~CHWMouse();
		void show(void);	
	};
	
	class CHPMouse:public AbstractMouse
	{
	public:
		CHPMouse();
		~CHPMouse();
		void show(void);	
	};
}
