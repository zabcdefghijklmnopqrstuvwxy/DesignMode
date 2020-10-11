#include"factory.h"

namespace FACTORY
{
AbstractFactory::AbstractFactory()
{

}

AbstractFactory::~AbstractFactory()
{

}

CHWFactory::CHWFactory()
{

}

CHWFactory::~CHWFactory()
{

}

AbstractKeyboard* CHWFactory::CreateKeyboard(void)
{
	return new CHWKeyboard();
}

AbstractMouse* CHWFactory::CreateMouse(void)
{
	return new CHWMouse();
}

CHPFactory::CHPFactory()
{

}

CHPFactory::~CHPFactory()
{

}

AbstractKeyboard* CHPFactory::CreateKeyboard(void)
{
	return new CHPKeyboard();
}

AbstractMouse* CHPFactory::CreateMouse(void)
{
	return new CHPMouse();
}

}
