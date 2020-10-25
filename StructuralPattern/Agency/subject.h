#pragma once
namespace SUBJECT
{
	class CSubject
	{
	public:
		CSubject();
		~CSubject();

		virtual void Request(void) = 0;
	};

	class CRealSubject:public CSubject
	{
	public:
		CRealSubject();
		~CRealSubject();

		void Request(void);
	};

}
