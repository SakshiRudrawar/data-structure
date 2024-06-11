/*
1                1
1 2            2 1
1 2 3        3 2 1
1 2 3 4    4 3 2 1
1 2 3 4 5 4 3 2 1

*/

#include<iostream>
using namespace std;

int main()
{
    int i, j ,k;
    int space=7; 
    

    for (i = 1; i <=5; i++)
    {
        
        for (j = 1; j <= i; j++)
        {
            cout <<j<<" ";
        }

        for (k=space; k>=1; k--)
        {
            cout << "  ";
        }
        space=space-2;

        for (j = i; j >= 1; j--)
        {
            
            if (j !=5)
            {
                cout <<j<< " ";
            }
        }
        cout << "\n";
    }

    return 0;
}


