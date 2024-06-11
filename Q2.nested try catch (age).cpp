#include<iostream>
using namespace std;

int main()
{
	int age;
	
	cout<<"enter the age :";
	cin>>age;
	
	try
	{
		if(age<0 || age >=110)
		{
			throw "invalid age";
		}
		
		else
		{
			try
			{
				if(age>=0 || age<=18)
				{
					throw "your age";
				}
				else
				{
				   cout<<"your age is :"<<age;	
				}
			}
			catch(const char* msg)
	        {
		        cout<<"inner try block executed";
	        }
		}
	}
	catch(const char* msg)
	{
		cout<<"outer try block executed";
	}
}









