#include<iostream>
using namespace std;
 

int main()
{
 

         int n = 5, p, c;
         for (p = 1; p <= n; p++) 
	{
          for (c = n; c > p; c--)
		{

            cout << " ";
		}
		cout << "*";
          for (c = 1; c < (p - 1) * 2;

             c++) 
		{
             cout << " ";
		}

        if (p == 1) 
		{
             cout << "\n";
	    }
		 else
		{

            cout << "*\n";

        }

    }
    for (p = n - 1; p >= 1; p--) 
	{
        for (c = n; c > p; c--) 
		{

            cout << " ";

        }
        cout << "*";

        for (c = 1; c < (p - 1) * 2;

             c++)
	    {

            cout << " ";

        }

        if (p == 1) 
		{

            cout << "\n";

        }

        else
	    {

            cout << "*\n";

        }

    }

    return 0;
}