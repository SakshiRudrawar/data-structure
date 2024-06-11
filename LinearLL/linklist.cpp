#include"linklist.h"
///////////////////////////////
LinkedList::LinkedList()
{
	start=NULL;
}
///////////////////////////////
void LinkedList::insertBeg(int d)
{
	Node *temp = new Node(d);
	temp->setNext(start);
	start = temp;
}
///////////////////////////////
void LinkedList::display()
{
	if(start == NULL)
	{
		cout<<"\nNo nodes to display";
		return;
	}
	else
	{
		Node *p=start;
		while(p!=NULL)
		{
			cout<<p->getData()<<"\t";
			p=p->getNext();
		}
	}
}
///////////////////////////
void LinkedList::insertEnd(int data)
{
	Node *temp = new Node(data);
	if(start == NULL)
	{
		start = temp;
		return;
	}
	Node *p=start;
	while(p->getNext()!=NULL)
	{
		p=p->getNext();
	}
	p->setNext(temp);
}
/////////////////////////////////
void LinkedList::insertPos(int data,int pos)
{
	Node *temp = new Node(data);
	if(start == NULL)
	{
		start = temp;
		return;
	}
	//Insert at beginning
	if(pos == 1)
	{
		temp->setNext(start);
		start = temp;
		return;
	}
	int i=1;
	Node *p=start;
	while(i<pos-1 && p->getNext()!=NULL)
	{
		p=p->getNext();
		i++;
	}
	temp->setNext(p->getNext());
	p->setNext(temp);
}
///////////////////////////////
void LinkedList::deleteBeg()
{
	if(start == NULL)
	{
		cout<<"\nNo nodes to delete";
	}
	else
	{
		Node *p=start;
		start = start->getNext();
		cout<<p->getData()<<" is getting deleted";
		delete p;
	}
}
///////////////////////////////
void LinkedList::deleteEnd()
{
	if(start == NULL)
	{
		cout<<"\nNo nodes to delete";
	}
	else
	{
		Node *p=start;
		//1 node 
		if(p->getNext()==NULL)
		{
			cout<<p->getData()<<" is getting deleted";
			delete p;
			start = NULL;
			return;
		}
		//Stop at 2nd last node
		while(p->getNext()->getNext()!=NULL)
		{
			p=p->getNext();
		}
		cout<<"\n"<<p->getNext()->getData()<<" is deleted";
		delete p->getNext();
		p->setNext(NULL);
	}
}
///////////////////////////
void LinkedList::deletePos(int pos)
{
	if(start == NULL)
	{
		cout<<"\nNo nodes to delete";
		return;
	}
	Node *p=start;
	if(pos == 1) //Delete from beg
	{
		start = start->getNext();
		cout<<"\n"<<p->getData()<<" is deleted";
		delete p;
		return;
	}
	int i=1;
	while(i<pos-1 && p->getNext()!=NULL)
	{
		p=p->getNext();
		i++;
	}
	if(i==pos-1 && p->getNext()!=NULL)
	{
		Node *q = p->getNext();
		p->setNext(q->getNext());
		cout<<"\n"<<q->getData()<<" is deleted";
		delete q;
		return;
	}
	else
	{
		cout<<"\nInvalid positon";
	}
}
//////////////////////////
LinkedList::~LinkedList()
{
	while(start!=NULL)
	{
		Node *p=start;
		start=start->getNext();
		delete p;
	}
	
}


