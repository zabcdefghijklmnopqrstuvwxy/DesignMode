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
		virtual AbstractProduct* CreateObject(int type) = 0;
	};

	class SimpleFactory:public AbstractFactory
	{
	public:
		SimpleFactory();
		~SimpleFactory();
		AbstractProduct* CreateObject(int type);
	};
}
