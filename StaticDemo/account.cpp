#include"account.h"
double Account::rate_of_interest = 0;
//////////////////////////
Account::Account(int ano,char *nm,double bal)
{
	acc_no =ano;
	strcpy(aname,nm);
	balance = bal;
}
//////////////////////////
void Account::display()
{
	cout<<"\nAccount ="<<acc_no;
	cout<<"\nName ="<<aname;
	cout<<"\nBalance ="<<balance;
}
//////////////////////////
void Account::deposit(double d)
{
	balance += d;
}
//////////////////////////
void Account::withdraw(double w)	
{
	if(w > balance)
	{
		cout<<"\nInsufficient Balance";
	}
	else
	{
		balance -= w;	
	}	
}
///////////////////////////////////
void Account::set_ROI(double r)
{
	rate_of_interest = r;
}
///////////////////////////////////
double Account::get_ROI()
{
	return rate_of_interest;
}
///////////////////////////////////
