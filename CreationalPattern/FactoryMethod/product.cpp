#include<iostream>
#include"product.h"

using namespace std;
namespace PRODUCT
{

AbstractProduct::AbstractProduct()
{

}

AbstractProduct::~AbstractProduct()
{

}

ProductA::ProductA()
{

}

ProductA::~ProductA()
{

}

ProductB::ProductB()
{

}

ProductB::~ProductB()
{

}

void ProductA::display(void)
{
	cout << "this is Product A" << endl;
}	

void ProductB::display(void)
{
	cout << "this is Product B" << endl;
}
	
}
