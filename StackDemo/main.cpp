#include "stack.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	Stack st(5);
	int choice = 0;
	while(choice!=5)
	{
		
	
		cout<<"\n\t\t1.Add element";
		cout<<"\n\t\t2.Display";
		cout<<"\n\t\t3.Pop";
		cout<<"\n\t\t5.Exit";
		cout<<"\nEnter your choice : ";
		cin>>choice;
		switch(choice)
		{
			case 1:
				{
					int ele;
					cout<<"\nEnter element";
					cin>>ele;
					if(st.push(ele))
					{
						cout<<"\nSuccess";
					}
					else
					{
						cout<<"\nStack Overflow";
					}
				}
				break;
			case 2:
				st.display();
				break;
			case 3:
				{
					
				
				int x;
				if(st.pop(x))
				{
					cout<<"\n"<<x<<" is popped";
				}
				else
				{
					cout<<"\nStack Underflow";
				}
			}
			
		}
		
		}
	return 0;
}





