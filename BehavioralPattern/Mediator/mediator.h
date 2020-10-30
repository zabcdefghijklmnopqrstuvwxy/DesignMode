#ifndef _MEDIATOR_H_
#define	_MEDIATOR_H_

#include"mesh.h"
#include<iostream>

using namespace std;

class CMesh;

class CMediator
{
		public:
				CMediator();
				~CMediator();
				void setmesha(CMesh *mesh);
				void setmeshb(CMesh *mesh);
				void sent(string msg,CMesh *mesh); 

		private:
				CMesh *m_meshA;
				CMesh *m_meshB;
};

#endif						
