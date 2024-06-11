#include"doublyll.h"
///////////////////////////
DoublyLL::DoublyLL()
{
	start = NULL;	
}
///////////////////////////
void DoublyLL::insertPos(int data,int pos)
{
	Node *temp=new Node(data);
	if(start == NULL)
	{
		start = temp;
		return;
	}
	if(pos == 1)
	{
		temp->setNext(start);
		start->setPrev(temp);
		start=temp;
		return;
	}
	Node *p=start;
	int i=1;
	while(p->getNext()!=NULL && i<pos-1)
	{
		i++;
		p=p->getNext();
	}
	temp->setPrev(p);
	temp->setNext(p->getNext());
	p->setNext(temp);
	if(temp->getNext()!=NULL)
	{
		temp->getNext()->setPrev(temp);
	}	
}
///////////////////////////
void DoublyLL::deletePos(int pos)
{
	
}
///////////////////////////
void DoublyLL::display()
{
	if(start == NULL)
	{
		cout<<"\nNo node to display";
		return;
	}
	Node *p=start;
	while(p!=NULL)
	{
		cout<<"\t"<<p->getData();
		p=p->getNext();
	}
	
}
///////////////////////////
DoublyLL::~DoublyLL()
{
	
}

