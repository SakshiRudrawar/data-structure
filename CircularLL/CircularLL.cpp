#include"circular.h"
//////////////////////////
CircularLL::CircularLL()
{
	last = NULL;
}
//////////////////////////
void CircularLL::insertPos(int data,int pos)
{
	Node *temp=new Node(data);
	if(last == NULL)
	{
		last = temp;
		temp->setNext(last);
		return;
	}
	//Insert at beginning
	if(pos==1)
	{
		temp->setNext(last->getNext());
		last->setNext(temp);
		return;
	}
	//p is pointing to 1st node
	Node *p=last->getNext();
	int i=1;
	while(i<pos-1 && p!=last)
	{
		p=p->getNext();
		i++;
	}
	temp->setNext(p->getNext());
	p->setNext(temp);
	if(p==last)
	{
		last=temp;
	}
	
}

//////////////////////////
void CircularLL::display()
{
	if(last == NULL)
	{
		cout<<"\nNo nodes to print";
		return;
	}
	Node *p=last->getNext();
	while(p!=last)
	{
		cout<<"\t"<<p->getData();
		p=p->getNext();
	}
	cout<<"\t"<<p->getData();
}
//////////////////////////
void CircularLL::deletePos(int pos)
{
	if(last == NULL)
	{
		cout<<"\nNo nodes to delete";
		return;
	}
	Node *p=last->getNext();
	if(pos==1)
	{
		cout<<p->getData()<<" is deleted";
		//1 node
		if(p==last)
		{	
			last=NULL;
		}
		else
		{
			last->setNext(p->getNext());
		}
		delete p;
		return;
	}
	int i=1;
	while(i<pos-1 && p!=last)
	{
		p=p->getNext();
		i++;
	}
	if(i==pos-1 && p!=last)
	{
		Node *q=p->getNext();
		p->setNext(q->getNext());
		if(q==last)
		{
			last=p;
		}
		cout<<q->getData()<<" is deleted";
		delete q;
		return;
	}
	else
	{
		cout<<"\nInvalid position";
	}
}
//////////////////////////
CircularLL::~CircularLL()
{
	
}
