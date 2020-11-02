#pragma once
namespace OBSERVER
{
	class CObserver
	{
	public:
		CObserver();
		~CObserver();

		virtual void update(unsigned int state) = 0;	
	};

	class CObserverA:public CObserver
	{
	public:
		CObserverA();
		~CObserverA();

		void update(unsigned int state);
	};

	class CObserverB:public CObserver
	{
	public:
		CObserverB();
		~CObserverB();

		void update(unsigned int state);
	};
}
