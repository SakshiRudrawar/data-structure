#include"stack.h"
/////////////////////////
Stack::Stack(int s)
{
	size = s;
	top = -1;
	pStack = new int[size];
}
/////////////////////////
bool Stack::isFull()
{
	if(top == size-1)
	{
		return true;
	}
	else
	{
		return false;
	}
}
/////////////////////////
bool Stack::isEmpty()
{
	if(top == -1)
	{
		return true;
	}
	else
	{
		return false;
	}
}
/////////////////////////
bool Stack::push(int ele)
{
	if(isFull())	
	{
		return false;
	}
	else
	{
		pStack[++top] = ele;
		return true;
	}
}
/////////////////////////
void Stack::display()
{
	if(isEmpty())
	{
		cout<<"\nNo elements to display";
		return;
	}
	else
	{
		for(int i=0;i<=top;i++)
		{
			cout<<pStack[i]<<"\t";
		}
	}
	
}
/////////////////////////
Stack::~Stack()
{	
	if(pStack!=NULL)
	{
		delete []pStack;	
	}
}
//////////////////////////////////
bool Stack::pop(int &t)
{
	if(isEmpty())
	{
		return false;
	}
	else
	{
		t = pStack[top--];
		return true;
	}
}
bool Stack::peek(int &t)
{
	if(isEmpty())
	{
		return false;
	}
	else
	{
		t = pStack[top];
		return true;
	}
}



