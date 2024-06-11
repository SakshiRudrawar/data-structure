#include "linklist.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int choice=0;
	LinkedList lt;
	while(choice!=4)
	{
		cout<<"\n\t\t1.Insert at position";
		cout<<"\n\t\t2.Delete from position";
		cout<<"\n\t\t3.Display";
		cout<<"\n\t\t4.Exit";
		cout<<"\nEnter your choice";
		cin>>choice;
		switch(choice)
		{
			case 1:
				{
					int pos;
					int eid;
					char name[20];
					double bs;
					cout<<"\nEnter eid,ename and basic";
					cin>>eid>>name>>bs;
					Emp e(eid,name,bs);
					cout<<"\nEnter pos";
					cin>>pos;
					lt.insertPos(e,pos);
				}
				break;
			case 2:
				{
					int pos;
					cout<<"\nEnter position";
					cin>>pos;
					lt.deletePos(pos);
				}
				break;
			case 3:
				lt.display();
				break;
			
		}
				
	}

	return 0;
}
