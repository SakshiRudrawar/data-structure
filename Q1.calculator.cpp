#include<iostream>
#include<limits>
using namespace std;

int main()
{
	int x, y, z;
	char ch;
	
	cout<<"enter the two numbers:";
	cin>>x>>y;
	
	
	
	try
	{
		
		if(cin.fail())
		{
			throw"invalid number";
		}
		
		cout<<"enter the operator :";
	    cin>>ch;
	
		
		if (ch != '+' && ch != '-' && ch != '*' && ch != '/')
		{
			throw"invalid operator"; // char
		}
		
		else
		{
			if(ch== '+')
			{
				z=x+y;
				cout<<"addition is :"<<z;
			}
			else if(ch == '-')
			{
				z=x-y;
				cout<<"substraction is :"<<z;
			}
			else if(ch == '*')
			{
				z=x*y;
				cout<<"multification is :"<<z;
			}
		    else if(ch == '/')
			{
				try
				{
					if(y==0)
					{
						throw"zero division error";
					}
					else
					{
						z=x/y;
						cout<<"division is :"<< z;
					}
				}
				catch(const char*a)
				{
					cout<<a;
				}

			}
		}
		
	}
	catch(const char*msg)
	{
		cout<<msg;
	} 
	
	catch(const char* b)
	{
		cout<<b;
	}
	 
	 return 0;
}











