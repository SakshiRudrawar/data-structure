#include"time.h"
//Allocate memory to static variable count
int Time::count=0;
////////////////////////
Time::Time()
{
	hr,min,sec = 0;
	count++;
	
}
////////////////////////
Time::Time(int h,int m,int s)
{
	hr = h;
	min = m;
	sec = s;
	count++;
}
////////////////////////
void Time::display()
{
	cout<<"\n"<<hr<<":"<<min<<":"<<sec;	
}
////////////////////////////////
void Time::displayCount()
{	
	cout<<"\nNumber of objects ="<<count;
}
