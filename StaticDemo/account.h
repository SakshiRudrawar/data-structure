#include<iostream>
#include<string.h>
using namespace std;
//////////////////////////////
class Account
{
	int acc_no;
	char aname[20];
	double balance;
	static double rate_of_interest;
	public:
		Account(int,char *,double);
		void display();
		void deposit(double);
		void withdraw(double);		
		static void set_ROI(double);
		static double get_ROI();
		
};
