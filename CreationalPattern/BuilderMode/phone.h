#pragma once

#include<iostream>
using namespace std;

namespace PHONE
{
	class CPhone
	{
	public:
		CPhone();
		~CPhone();
		
		void SetCamera(std::string camera);		
		void SetScreen(std::string screen);		
		void SetEarphone(std::string earphone);	
		void display(void);

	private:
		std::string camera_;
		std::string screen_;	
		std::string earphone_;
	};
}
