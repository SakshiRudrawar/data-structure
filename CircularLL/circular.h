#include"node.h"
///////////////////////
class CircularLL
{
	Node *last;
	public:
		CircularLL();
		void insertPos(int,int);
		void display();
		void deletePos(int);
		~CircularLL();
};
