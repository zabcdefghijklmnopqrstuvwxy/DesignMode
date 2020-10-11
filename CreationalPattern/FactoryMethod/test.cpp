#include<iostream>
#include "product.h"
#include "factory.h"

using namespace PRODUCT;
using namespace FACTORY;

int main(void)
{
	CFactoryA factorya;
	CFactoryB factoryb;
	AbstractProduct *producta = factorya.CreateObject();
	AbstractProduct *productb = factoryb.CreateObject();

	producta->display();
	productb->display();

	delete producta;
	delete productb;

	return 0;
}
