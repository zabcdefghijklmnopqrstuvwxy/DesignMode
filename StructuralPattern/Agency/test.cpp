#include"proxy.h"

using namespace PROXY;

int main(void)
{
	CProxy *proxy = new CProxy();
	
	proxy->Request();

	delete proxy;
	
	return 0;
}
