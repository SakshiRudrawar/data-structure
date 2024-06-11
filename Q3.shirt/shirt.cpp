#include "shirt.h"
#include <iostream>
#include <cstring>

using namespace std;

double shirt::sizediscount = 0.1;

shirt::shirt() 
{
    sid = 0;
    strcpy(sname, "not given");
    strcpy(type, "not given");
    price = 0;
    size = 0;
}

shirt::shirt(int id, char* snm, char* t, double p, char s) 
{
    sid = id;
    strcpy(sname, snm);
    strcpy(type, t);
    price = p;
    size = s;
}

void shirt::showshirt() 
{
    cout << "Shirt ID: " << sid << "\n";
    cout << "Name: " << sname << "\n";
    cout << "Type: " << type << "\n";
    cout << "Price: " << price << "\n";
    cout << "Size: " << size << "\n";
}

void shirt::applysizeCount(shirt& s) 
{
    if (s.size == 's') 
	{
        s.price = s.price;
    } 
	else if (s.size == 'm') 
	{
        s.price = s.price * (1 + sizediscount);
    } 
	else if (s.size == 'l') 
	{
        s.price = s.price * (1 + 2 * sizediscount);
    } 
	else if (s.size == 'xl') 
	{
        s.price = s.price * (1 + 3 * sizediscount);
    }

    cout << "Updated discount price is: " << s.price << endl;
}





