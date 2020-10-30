#include "mediator.h"

CMediator::CMediator()
{

}

CMediator::~CMediator()
{

}

void CMediator::setmesha(CMesh *mesh)
{
		m_meshA = mesh;	
}

void CMediator::setmeshb(CMesh *mesh)
{
		m_meshB = mesh;	
}

void CMediator::sent(string msg,CMesh *mesh)
{
		if(mesh == m_meshA)
		{
				m_meshB->notify(msg);
		}
		else if(mesh == m_meshB)
		{
				m_meshA->notify(msg);
		}
}
