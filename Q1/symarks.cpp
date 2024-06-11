
#include "symarks.h"
#include <iostream>

namespace sy
{
    symarks :: symarks()
    {
    	computerTotal=0.0;
    	mathsTotal=0.0;
    	electronicsTotal=0.0;
	}
	
	symarks :: symarks(double c, double m, double e)
	{
		computerTotal=c;
    	mathsTotal=m;
    	electronicsTotal=e;	
	}

    void symarks :: display() 
	{
        cout << "Computer Total: " << computerTotal << std::endl;
        cout << "Maths Total: " << mathsTotal <<endl;
        cout << "Electronics Total: " << electronicsTotal << endl;
    }
}


