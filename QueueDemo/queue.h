#include<iostream>
using namespace std;
////////////////////////////
class Queue
{
	int size;
	int front,rear;
	int *pQueue;
	public:
		Queue(int);
		bool isEmpty();
		bool isFull();
		bool enqueue(int);
		void display();
		bool dequeue(int &);
		~Queue();
};
