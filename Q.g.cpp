/*
        1
      1 2 1
    1 2 3 2 1
  1 2 3 4 3 2 1
1 2 3 4 5 4 3 2 1

*/

#include<iostream>
using namespace std;

int main()
{
    int i, j, n = 5;

    for (i = 1; i <= n; i++)
    {
        // Print spaces
        for (j = i; j < n; j++)
        {
            cout << "  ";
        }

        // Print increa=sing numbers
        for (j = 1; j <=i; j++)
        {
            cout << j << " ";
        }

        // Print decreasing numbers
        for (j = i - 1; j >= 1; j--)
        {
            cout << j << " ";
        }

        cout << "\n";
    }

    return 0;
}

















