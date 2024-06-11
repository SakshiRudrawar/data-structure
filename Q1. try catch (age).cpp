#include<iostream>
using namespace std;

int main()
{
	int age;
	
	cout<<"enter your age:";
	cin>>age;
	
	try
	{
	
		if(age < 0 || age >=140)
		{
			throw "invalid age";
			//throw age ;
		   // throw 10;
		   //throw 2.2;
		   // throw 'c';
	    }
	    else
	    {
		   cout<<"\n your age is : " <<age;
     	}
	}
	
	catch(const char* msg) // when we enter string this catch is executed
	{
		cout<<msg;
	}
	
	catch(int age) // when we enter 10 that time this catch is executed
	{
		cout<<age<<"is valid";
	}
	
	catch(...) // when we enter float or other value except int and string value that time this catch is executed.
	{
		cout<<"\n someting went wrong";
	}
	
return 0;
}







