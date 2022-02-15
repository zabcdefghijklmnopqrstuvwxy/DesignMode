#include<iostream>
#include"capi.hpp"

using namespace std;
namespace CApi
{

REG_CLASS(ImplB); 

void ImplA::display(void)
{
	cout << "this is ImplA" << endl;
}	

void ImplB::display(void)
{
	cout << "this is ImplB" << endl;
}
	
}
