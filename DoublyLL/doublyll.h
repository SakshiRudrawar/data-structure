#include"node.h"
////////////////////////
class DoublyLL
{
	Node *start;
	public:
		DoublyLL();
		void insertPos(int,int);
		void deletePos(int);
		void display();
		~DoublyLL();
};
