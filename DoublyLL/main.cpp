#include "doublyll.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	int choice=0;
	DoublyLL lt;
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
					int ele,pos;
					cout<<"\nEnter an element and pos";
					cin>>ele>>pos;
					lt.insertPos(ele,pos);
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
