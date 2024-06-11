#include"product.h"
#include<string.h>

using namespace std;

double product :: discount=0.1;

product :: product()
{
	pid=0;
	strcpy(pname, "not given");
	price=0;
	quantity=0;
		
}

product :: product(int id, char*nm, double p, int q)
{
	pid=id;
	strcpy(pname,nm);
	price=p;
	quantity=q;
	
}

void product :: showproduct()
{
	cout<<" product _id :"<<pid<<"\n";
	cout<<" name:"<<pname<<"\n";
	cout<<" price:"<<price<<"\n";
	cout<<" quantity:"<<quantity<<"\n";
}

void product :: applydiscount()
{
	price= (price*discount);
	cout<<"\n Discount applied! updated price is :"<<price<<endl;
}


















