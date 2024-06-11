#include<iostream>
using namespace std;

class book 
{

    int bid;
    char bname[20];
    double price;
    char author[20];

    static int count;

	public:
	    book();
	    book(int, char*, double, char*);
	    void showbook();
	    static void displayCount();
};


