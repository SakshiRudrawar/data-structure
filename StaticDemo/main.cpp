#include "time.h"
#include"account.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main()
{
	Account a1(101,"Ramesh",3000);
	a1.display();
	Account::set_ROI(2.4);
	cout<<"\nRate of Interest -"<<Account::get_ROI();
}
int main1()
{
	//Stati method is called using class-name
	Time::displayCount();
	Time t1(1,2,3);
	//non-static is called using object name
	t1.display();
	Time t2;
	t2.display(); //Instance level method
	//Object level method
	Time::displayCount();
	
	
	return 0;
}
