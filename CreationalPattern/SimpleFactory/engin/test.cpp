#include<iostream>
#include "capi.hpp"

using namespace CApi;


int main(void)
{
	AbstractApi *papi  = AutoFactory::createApi();

	papi->display();

	delete papi;

	return 0;
}
