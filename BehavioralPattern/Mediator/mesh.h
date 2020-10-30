#ifndef _MESH_H_
#define _MESH_H_

#include<iostream>
#include"mediator.h"

using namespace std;

class CMediator;

class CMesh
{
public:
	CMesh(CMediator *mediator):m_mediator(mediator)
	{

	}
	~CMesh();

	virtual void send(string msg) = 0;
	virtual void notify(string msg) = 0;

protected:
	CMediator *m_mediator;		
};

class CMeshA:public CMesh
{
public:
	CMeshA(CMediator *mediator):CMesh(mediator)
	{

	}
	~CMeshA();

	void send(string msg);
	void notify(string msg);
};

class CMeshB:public CMesh
{
public:
	CMeshB(CMediator *mediator):CMesh(mediator)
	{

	}
	~CMeshB();

	void send(string msg);
	void notify(string msg);
};

#endif
