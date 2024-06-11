#include <iostream>

using namespace std;
 

int main()
{

    int i, j, k = 0;

    for (i = 1; i <= 5; i++) 
	{
    for (j = 1; j <= i; j++)
    {
        if (j == 1 || j == i || i == 5)

                cout << j << " ";

            else

                cout << "  ";

        }

        cout << endl;

    }
    return 0;
}
