
#include <iostream>
#include <cstring>

class product 
{

    int pid;
    char pname[20];
    double price;
    int quantity;

    static double discount;

public:
	
    product();
    product(int, char*, double, int);
    void showproduct();
    void applydiscount();
};



