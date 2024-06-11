#include"book.h"

int main()
{
	book b1;
	book b2(1, "The horror story", 100.00, "sakshi");
	
	cout<<"book 1 details: \n";
	b1.showbook();
	
	cout<<"\n book 2 details: \n";
	b2.showbook();
	
	
	book::displayCount();
	return 0;
}

