#include<iostream>
using namespace std;

int main()
{
	int num ,i, result=-1;
	
	int arr[20]={10, 40, 30, 50, 43, 12, 78, 90,60,10};
	
	cout<<"enter the number you want to search : "; 
	cin>>num;
	
	for(i=0; i<=10; i++) 
	{
		if(arr[i] == num)
		{
			result=i;
			//break;
		}
	}
	
	if(result != -1)  
	{
		cout<<" Element found at index : "<<result;	
	}
	else
	{
		cout<<"element not found in array";
	}
	
	return 0;
		
}
