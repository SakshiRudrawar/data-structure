#include"stack.h"
/////////////////////////
template<class T>
Stack<T>::Stack(int s)
{
	size = s;
	top = -1;
	pStack = new T[size];
}
/////////////////////////
template<class T>
bool Stack<T>::isFull()
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
template<class T>
bool Stack<T>::isEmpty()
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
template<class T>
bool Stack<T>::push(T &ele)
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
template<class T>
void Stack<T>::display()
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
template<class T>
Stack<T>::~Stack()
{	
	if(pStack!=NULL)
	{
		delete []pStack;	
	}
}
//////////////////////////////////
template<class T>
bool Stack<T>::pop(T &t)
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
/////////////////////////////////////
template<class T>
bool Stack<T>::peek(T &t)
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
