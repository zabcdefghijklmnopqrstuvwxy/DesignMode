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

CFactoryA::CFactoryA()
{

}

CFactoryA::~CFactoryA()
{

}

CFactoryB::CFactoryB()
{

}

CFactoryB::~CFactoryB()
{

}

AbstractProduct* CFactoryA::CreateObject(void)
{
	return new ProductA();
}

AbstractProduct* CFactoryB::CreateObject(void)
{
	return new ProductB();
}
