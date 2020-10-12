#include "phone.h"

namespace PHONE
{
	CPhone::CPhone()
	{

	}

	CPhone::~CPhone()
	{

	}

	void CPhone::SetCamera(std::string camera)
	{
		camera_ = camera;
	}

	void CPhone::SetScreen(std::string screen)
	{
		screen_ = screen;
	}

	void CPhone::SetEarphone(std::string earphone)
	{
		earphone_ = earphone;
	}

	void CPhone::display(void)
	{
		cout << "The Phone camera is " << camera_ << endl;
		cout << "The Phone screen is " << screen_ << endl;
		cout << "The Phone earphone is " << earphone_ << endl;
	}
}
