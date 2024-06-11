#include<iostream>

class shirt 
{
    int sid;
    char sname[20];
    char type[20];
    double price;
    char size;

    static double sizediscount;

public:
    shirt();
    shirt(int id, char* snm, char* t, double p, char s);
    void showshirt();
    static void applysizeCount(shirt& s); 
};



