#pragma once
#include"food.h"
using namespace FOOD;

namespace DECORATE
{
	class CDecorate:public CFood
	{
	public:
		CDecorate(CFood *food):m_food(food)
		{

		}
		~CDecorate();

	protected:
		CFood *m_food;			
	};

	class CSweetdecorate:public CDecorate
	{
	public:
		CSweetdecorate(CFood *food):CDecorate(food)
		{

		}
		~CSweetdecorate();

		void cook(void);
		void addsweet(void);
	}; 

	class CSpicydecorate:public CDecorate
	{
	public:
		CSpicydecorate(CFood *food):CDecorate(food)
		{

		}
		~CSpicydecorate();

		void cook(void);
		void addspicy(void);
	}; 
} 
