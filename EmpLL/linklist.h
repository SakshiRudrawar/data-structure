#include"node.h"
//////////////////////////
class LinkedList
{
	Node *start;
	public:
		LinkedList();
		void display();
		void insertPos(Emp &,int);
		void deletePos(int);
		~LinkedList();
};
