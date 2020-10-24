#include"factory.h"

namespace FACTORY
{
	CFactory::CFactory()
	{
		m_map.insert(make_pair<string, CFont *>("fontA",new CFontA()));
		m_map.insert(make_pair<string, CFont *>("fontB",new CFontB()));
	}

	CFactory::~CFactory()
	{
		
	}

	CFont* CFactory::GetProduct(string symbol)
	{
		std::map<string,CFont*>::iterator ite = m_map.find(symbol);

		if(ite != m_map.end())
		{
			return (CFont*)ite->second;
		}

		return NULL;
	}
}
