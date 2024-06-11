#include<iostream>
using namespace std;
//////////////////////////
template<class T>
class Stack
{
	int top,size;
	T *pStack;
	public:
		Stack(int);
		bool isFull();
		bool isEmpty();
		bool push(T &);
		void display();
		bool pop(T &);
		bool peek(T &);
		~Stack();
};
