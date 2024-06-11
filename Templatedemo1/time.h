#include<iostream>
using namespace std;
///////////////////////////
class Time
{
	int hr,min,sec;
	static int count; //Class level variable
	public:
		//Non-static methods
		Time();
		Time(int,int,int);
		void display();
		//static method
		static void displayCount();
		Time operator+(Time &);
};
