#include<iostream>
#include"factory.h"
#include"product.h"

using namespace FACTORY;
using namespace PRODUCT;

AbstractFactory::AbstractFactory()
{

}

AbstractFactory::~AbstractFactory()
{

}

SimpleFactory::SimpleFactory()
{

}

SimpleFactory::~SimpleFactory()
{

}

AbstractProduct* SimpleFactory::CreateObject(int type)
{
	if(type == PRODUCTA)
	{
		return new ProductA();
	}
	else if(type == PRODUCTB)
	{
		return new ProductB();
	}

	return NULL;
}

