#pragma once
#include"product.h"

using namespace PRODUCT;
namespace FACTORY
{
	class AbstractFactory
	{
	public:
		AbstractFactory();
		~AbstractFactory();
		virtual AbstractProduct* CreateObject(void) = 0;
	};

	class CFactoryA:public AbstractFactory
	{
	public:
		CFactoryA();
		~CFactoryA();
		AbstractProduct* CreateObject(void);
	};

	class CFactoryB:public AbstractFactory
	{
	public:
		CFactoryB();
		~CFactoryB();
		AbstractProduct* CreateObject(void);
	};
}
