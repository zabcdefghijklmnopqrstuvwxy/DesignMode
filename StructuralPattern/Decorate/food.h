#pragma once
namespace FOOD
{
	class CFood
	{
	public:
		CFood();
		~CFood();

		virtual void cook(void) = 0;
	};

	class CMeat:public CFood
	{
	public:
		CMeat();
		~CMeat();

		void cook(void);	
	};

	class CFish:public CFood
	{
	public:
		CFish();
		~CFish();

		void cook(void);	
	};
}




