#include"node.h"
///////////////////////
Node::Node(int d)
{
	data = d;
	next = NULL;
	prev = NULL;
}
///////////////////////
int Node::getData()
{
	return data;
}
///////////////////////
Node *Node::getNext()
{
	return next;
}
///////////////////////
void Node::setData(int d)
{
	data = d;
}
///////////////////////
void Node::setNext(Node *nt)
{
	next = nt;
}
///////////////////////
Node *Node::getPrev()
{
	return prev;
}
///////////////////////
void Node::setPrev(Node *p)
{
	prev = p;
}

