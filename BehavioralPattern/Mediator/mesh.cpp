#include"mesh.h"

CMesh::~CMesh()
{

}

CMeshA::~CMeshA()
{

}

void CMeshA::send(string msg)
{
		cout << "[A Send]:" << msg << endl;
		m_mediator->sent(msg,this);
}

void CMeshA::notify(string msg)
{
		cout << "[A Recv]:" << msg << endl;
}

CMeshB::~CMeshB()
{

}

void CMeshB::send(string msg)
{
		cout << "[B Send]:" << msg << endl;
		m_mediator->sent(msg,this);
}

void CMeshB::notify(string msg)
{
		cout << "[B Recv]:" << msg << endl;
}
