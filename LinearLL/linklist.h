#include"node.h"
//////////////////////////
class LinkedList
{
	Node *start;
	public:
		LinkedList();
		void insertBeg(int);
		void display();
		void insertEnd(int);
		void insertPos(int,int);
		void deleteBeg();
		void deleteEnd();
		void deletePos(int);
		~LinkedList();
};
