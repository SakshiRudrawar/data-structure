#include"linklist.h"
///////////////////////////////
LinkedList::LinkedList()
{
	start=NULL;
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
			//p->getData() is an object
			cout<<p->getData(); //cout<<e1
			//p->getData().display();
			p=p->getNext();
		}
	}
}
/////////////////////////////////
void LinkedList::insertPos(Emp &data,int pos)
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
///////////////////////////////////////
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
		p->getData().display();
		cout<<"\nDeleted..";
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
		q->getData().display();
		cout<<"\n is deleted";
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


