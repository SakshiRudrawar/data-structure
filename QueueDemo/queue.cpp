#include"queue.h"
///////////////////////////
Queue::Queue(int s)
{
	size = s;
	front = -1;
	rear = -1;
	pQueue = new int[size];
}
///////////////////////////
bool Queue::isEmpty()
{
	if(front == -1 && rear == -1)
	{
		return true;
	}
	else
	{
		return false;
	}
}
///////////////////////////
bool Queue::isFull()
{
	if((front==0 && rear ==size-1) || 
	                  (front == rear+1))
	{
		return true;
	}
	else
	{
		return false;
	}
}
///////////////////////////
bool Queue::enqueue(int ele)
{
	if(isFull())
	{
		cout<<"\nQueue is full";
		return false;
	}
	else
	{
		if(isEmpty())
		{
			front=rear=0;
		}
		else if(rear == size-1)
		{
			rear=0;
		}
		else
		{
			rear++;
		}
		pQueue[rear]=ele;
		return true;
	}
}
///////////////////////////
void Queue::display()
{
	if(this->isEmpty())
	{
		cout<<"\nNo elements to display";
	}
	else
	{
		int i=front;
		while(i!=rear)
		{
			cout<<pQueue[i]<<"   ";
			if(i==size-1)
			{
				i=0;
			}
			else
			{
				i++;
			}
		}
		cout<<pQueue[i]<<"   ";
	}
}
///////////////////////////
bool Queue::dequeue(int &t)
{
	if(this->isEmpty())
	{
		cout<<"\nNo elements to delete";
		return false;
	}
	else
	{
		//Store the front element in 
		//out parameter
		t = pQueue[front];
		//Only 1 element
		if(front==rear)
		{
			front=rear=-1;
		}
		else if(front == size-1)
		{
			front = 0;
		}
		else
		{
			front++;
		}
		return true;
	}
}
///////////////////////////
Queue::~Queue()
{
	delete []pQueue;
}
///////////////////////////
