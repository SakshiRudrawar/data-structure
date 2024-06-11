#include<iostream>
using namespace std;

int main()
{
	int x, y, z;
	
	cout<<"enter the 2 numbers x and y :";
	cin>>x>>y;
	
	int age;
	
	try
	{
		if(y==0)
		{
			throw"\n zero division error";
		}
		else
		{
			z=x/y;
			cout<<"\n result="<<z;
			
			cout<<"\n Enter age:";
			cin>>age;
			
			try
			{
				if(age<0 || age>140)
				{
					throw "invalid age";
				}
			}
			catch(const char* m)
			{
				cout<<m<<"\n inner block";	
			}
		}
	}
	catch(const char* msg)
	{
		cout<<"\n"<<msg<<"outer block";
	}
}












