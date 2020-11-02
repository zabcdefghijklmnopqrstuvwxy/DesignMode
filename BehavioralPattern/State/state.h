#pragma once

namespace STATE
{
	class CState
	{
	public:
		CState();
		~CState();

		virtual void say(void) = 0;
	};

	class CFrogstate:public CState
	{
	public:
		CFrogstate();
		~CFrogstate();

		void say(void);
	};

	class CPrincestate:public CState
	{
	public:
		CPrincestate();
		~CPrincestate();

		void say(void);
	};
}
