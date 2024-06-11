#include"node.h"
///////////////////////
Node::Node(Emp &d)
{
	data = d;
	next = NULL;
}
///////////////////////
Emp Node::getData()
{
	return data;
}
///////////////////////
Node *Node::getNext()
{
	return next;
}
///////////////////////
void Node::setData(Emp &d)
{
	data = d;
}
///////////////////////
void Node::setNext(Node *nt)
{
	next = nt;
}
///////////////////////

