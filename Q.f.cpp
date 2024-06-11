/* 

1 2 3 4 5
2     5
3   5
4 5
5

*/


#include<iostream>
using namespace std;

int main()
{
	int i,j;

    for ( i=1; i<=5; i++)
    {
        
        for ( j=i; j<=5; j++)
        {
            if(j==i || j==5 || i==1 )
            cout<<j<<" ";
            else
            cout<<"  ";
        }

        cout << "\n";
    }

    //return 0;
}

