#include<iostream>
#include"keyboard.h"

using namespace std;

namespace KEYBOARD
{
AbstractKeyboard::AbstractKeyboard()
{

}

AbstractKeyboard::~AbstractKeyboard()
{

}

CHWKeyboard::CHWKeyboard()
{

}

CHWKeyboard::~CHWKeyboard()
{

}

void CHWKeyboard::show(void)
{
	cout << "this is HW Keyboard" << endl;
}


CHPKeyboard::CHPKeyboard()
{

}

CHPKeyboard::~CHPKeyboard()
{

}

void CHPKeyboard::show(void)
{
	cout << "this is HP Keyboard" << endl;
}

}

