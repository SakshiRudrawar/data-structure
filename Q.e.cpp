 /*
 
           1
         1   2
       1       3 
     1           4
   1   2   3   4   5  
   
*/

#include<iostream>
using namespace std;

int main()
{
    int i,j;

    for ( i = 1; i <= 5; i++)
	{
        
        for ( j = 1; j <= 6-i ; j++)
        {
            cout << " ";
        }

        for (int j = 1; j <= i; j++)
        {
        	if(j==1 || j==i || i==5)
        	
        		cout << j << " ";
			
			else

				cout<<"  ";
			
       }

        cout << "\n";
    }

    return 0;
}

