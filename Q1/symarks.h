#include<iostream>

using namespace std;

namespace sy
{
    class symarks 
	{
        double computerTotal;
        double mathsTotal;
        double electronicsTotal;

    public:
        symarks();
        symarks(double,double,double);
        void display();
    };
}

