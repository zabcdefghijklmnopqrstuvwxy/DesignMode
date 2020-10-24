#pragma once

#include<iostream>
#include<map>
#include"font.h"

using namespace std;
using namespace FONT;

namespace FACTORY
{
	class CFactory
	{
	public:
		CFactory();
		~CFactory();

		CFont* GetProduct(string symbol);
		
	private:
		std::map<string , CFont *> m_map;	
	};
}

