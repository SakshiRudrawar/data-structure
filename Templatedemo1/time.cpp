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
//////////////////////////////
Time Time::operator+(Time &t)
{
	Time result;
	result.sec = this->sec+t.sec;
	result.min = result.sec/60;
	result.sec = result.sec%60;
	result.min += this->min + t.min;
	result.hr = result.min /60;
	result.min = result.min % 60;
	result.hr += this->hr + t.hr;
	return result;
}
