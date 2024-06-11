#include<iostream>
#include<cstring>
using namespace std;

class television
{
	int model_no;
	double screen_size;
	double price;
	
	public:
		
		void takeInput()
		{
		  cout<<"enter the model_no :";
		  cin>>model_no;
		  
		  if(model_no > 9999)
		  {
		  	throw"invalid model number , it should be greater tha 4 digit";	
		  }
		  
		  cout<<"enter the screen size:";
	      cin>>screen_size;
	      
	      if(screen_size < 12 || screen_size > 70)
	      {
	      	throw"invalid screen size ,it should be between 12 to 7 inches";
		  }
		  
		  cout<<"enter the price:";
	      cin>>price;
	      
	      if(price<0 || price>5000)
	      {
	      	throw"invalid price ,it should be between 0 to 5000";
		  }	  
		  	
	}
	
	void displayData()
	{
		cout<<"\n television details:";
		cout<<"\n model number:"<<model_no;
		cout<<"\n screen size: "<<screen_size;
		cout<<"\n price :"<<price;
	}
	
	void resetData()
	{
		model_no=0;
		screen_size=0.0;
		price=0.0;
	}
};



int main()
{
  television t1;
  
  try
  {
  	t1.takeInput();
  	t1.displayData();
  }
  catch(const char*msg)
  {
  	cout<<"Exception caught:";
  	cout<<"\n reset datamember with 0";
  	t1.resetData(); 	
  }
  
  cout<<"\n After handling exception";
  t1.displayData();
	
	
	return 0;	
	
}
