#pragma once

namespace STRATEGY
{
	class CStrategy
	{
	public:
		CStrategy();
		~CStrategy();

		virtual void algorithm(void) = 0;
	};

	class CStrategyA:public CStrategy
	{
	public:
		CStrategyA();
		~CStrategyA();

		void algorithm(void);
	};

	class CStrategyB:public CStrategy
	{
	public:
		CStrategyB();
		~CStrategyB();

		void algorithm(void);
	};
}
