#include "book.h"
#include<string.h>

int book :: count=0;

book :: book()
{
	bid =0;
	strcpy(bname, "not given");
	price=0;
	strcpy(author, " not given");
	
	count++;
}

book :: book(int id , char* nm, double pr,char* au)
{
	bid =id;
	strcpy(bname,nm);
	price=pr;
	strcpy(author, au);
	
	count++;
}

void book :: showbook()
{
	cout<<" book id : " << bid<<"\n";
	cout<<"name : " << bname<<"\n";
	cout<<"price : " << price<<"\n";
	cout<<"author : " << author<<"\n";	
}

void book::displayCount()
{
	cout<<"\nNumber of object: "<<count;
}









