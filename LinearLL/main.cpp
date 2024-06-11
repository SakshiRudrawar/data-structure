#include "linklist.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	LinkedList lt;
	int choice = 0;
	while(choice !=10)
	{
		cout<<"\n\t\t1.Insert at the beginning";
		cout<<"\n\t\t2.Insert at the end";
		cout<<"\n\t\t3.Display";
		cout<<"\n\t\t4.Insert at the position";
		cout<<"\n\t\t5.Delete from beg";
		cout<<"\n\t\t6.Delete from end";		
		cout<<"\n\t\t7.Delete from pos";
		cout<<"\n\t\t10.Exit";
		cout<<"\nEnter your choice : ";
		cin>>choice;
		switch(choice)
		{
			case 1:
				{
					int ele;
					cout<<"\nEnter an element"	;
					cin>>ele;
					lt.insertBeg(ele);
				}
				break;
			case 2:
				{
					int ele;
					cout<<"\nEnter an element"	;
					cin>>ele;
					lt.insertEnd(ele);
				}
				break;
			case 3:
				lt.display();
				break;
			case 4:
				{
					int ele,pos;
					cout<<"\nEnter an element and pos"	;
					cin>>ele>>pos;
					lt.insertPos(ele,pos);
				}
				break;
			case 5:
				lt.deleteBeg();
				break;
			case 6:
				lt.deleteEnd();
				break;
			case 7:				
				{
					int pos;	
					cout<<"\nEnter position";
					cin>>pos;
					lt.deletePos(pos);					
				}
				break;
				
				
			default:
				cout<<"\nPlease enter valid choice";
			
		}
	}
	return 0;
}

