#include"queue.h"
/////////////////////////////////
int main()
{
	int choice = 0;
	Queue qt(5);
	while(choice!=4)
	{
		cout<<"\n\t\t1.Push";
		cout<<"\n\t\t2.Pop";
		cout<<"\n\t\t3.Display";
		cout<<"\n\t\t4.Exit";
		cout<<"\nEnter your choice : ";
		cin>>choice;	
		switch(choice)
		{
			case 1:
				{
					int ele;
					cout<<"\nEnter the element ";
					cin>>ele;
					if(qt.enqueue(ele))
					{
						cout<<"\nSuccess..";
					}
				}
				break;
			case 2:
				{
					int x; 
					if(qt.dequeue(x))
					{
						cout<<x<<" is popped..";
					}
					
				}
				break;
			case 3:
				qt.display();
				break;
			case 4:
				cout<<"\nEnd of program";
				break;
			default:
				cout<<"\nInvalid choice";
				break;
		}
	}
	
	return 0;
}
