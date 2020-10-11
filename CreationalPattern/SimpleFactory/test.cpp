#include<iostream>
#include "product.h"
#include "factory.h"

using namespace PRODUCT;
using namespace FACTORY;

int main(void)
{
	SimpleFactory factory;
	AbstractProduct *producta = factory.CreateObject(PRODUCTA);
	AbstractProduct *productb = factory.CreateObject(PRODUCTB);

	producta->display();
	productb->display();

	delete producta;
	delete productb;

	return 0;
}
