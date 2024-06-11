#include<iostream>
using namespace std;
//////////////////////////
class Stack
{
	int top,size;
	int *pStack;
	public:
		Stack(int);
		bool isFull();
		bool isEmpty();
		bool push(int);
		void display();
		bool pop(int &);
		bool peek(int &);
		~Stack();
};
