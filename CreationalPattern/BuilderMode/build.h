#pragma once
#include"phone.h"

using namespace PHONE;
namespace BUILD
{
	class AstractBuild
	{
	public:		
		AstractBuild();
		~AstractBuild();

		virtual void BuildCamera(void) = 0;
		virtual void BuildScreen(void) = 0;
		virtual void BuildEarphone(void) = 0;
		
		virtual CPhone* GetPhone(void);
		CPhone *phone_;
	};

	class VivoBuild:public AstractBuild
	{
	public:	
		VivoBuild();
		~VivoBuild();

		void BuildCamera(void);
		void BuildScreen(void);
		void BuildEarphone(void);
	};

	class HwBuild:public AstractBuild
	{
	public:	
		HwBuild();
		~HwBuild();

		void BuildCamera(void);
		void BuildScreen(void);
		void BuildEarphone(void);
	};
}



