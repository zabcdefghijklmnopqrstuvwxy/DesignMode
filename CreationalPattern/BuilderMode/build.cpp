#include "build.h"

namespace BUILD
{
	AstractBuild::AstractBuild()
	{

	}

	AstractBuild::~AstractBuild()
	{

	}

	CPhone* AstractBuild::GetPhone(void)
	{
		return phone_;
	}


	VivoBuild::VivoBuild()
	{
		phone_ = new CPhone();
	}

	VivoBuild::~VivoBuild()
	{
		delete phone_;
	}

	void VivoBuild::BuildCamera(void)
	{
		phone_->SetCamera("vivo");
	}

	void VivoBuild::BuildScreen(void)
	{
		phone_->SetScreen("vivo");
	}

	void VivoBuild::BuildEarphone(void)
	{
		phone_->SetEarphone("vivo");
	}

	HwBuild::HwBuild()
	{
		phone_ = new CPhone();
	}

	HwBuild::~HwBuild()
	{
		delete phone_;
	}

	void HwBuild::BuildCamera(void)
	{
		phone_->SetCamera("hw");
	}

	void HwBuild::BuildScreen(void)
	{
		phone_->SetScreen("hw");
	}

	void HwBuild::BuildEarphone(void)
	{
		phone_->SetEarphone("hw");
	}

}
