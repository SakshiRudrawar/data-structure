#include"product.h"
using namespace std;

int main()
{
	product p1;
	product p2(1, "shoes", 500, 2);
	
	cout<<"product 1 details \n";
	p1.showproduct();
	
	cout<<"\n product 2 details: \n";
	p2.showproduct();
	
	cout<<"\n Applying discount to product 2:"<<endl;
	p2.applydiscount();
	return 0;
}
