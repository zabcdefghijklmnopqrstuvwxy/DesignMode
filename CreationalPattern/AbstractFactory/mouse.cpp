#include<iostream>
#include"mouse.h"

using namespace std;

namespace MOUSE
{
AbstractMouse::AbstractMouse()
{

}

AbstractMouse::~AbstractMouse()
{

}


CHWMouse::CHWMouse()
{

}

CHWMouse::~CHWMouse()
{

}

void CHWMouse::show(void)
{
	cout << "this is HW mouse" << endl;
}

CHPMouse::CHPMouse()
{

}

CHPMouse::~CHPMouse()
{

}

void CHPMouse::show(void)
{
	cout << "this is HP mouse" << endl;
}

}
