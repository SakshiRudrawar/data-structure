#include<iostream>

#include<cstring>
using namespace std;

int main() 
{
    int temp1 = -1, temp2 = -1;
    
    const char* arr[8] = {"ab", "ac", "ad", "sa", "sc", "sd", "pq", "jm"};
    int brr[8] = {400, 500, 600, 300, 200, 100, 450, 560};
    
    char src[3];
    char des[3];

    cout << "Enter the source: ";
    cin >> src;

    cout << "Enter the destination: ";
    cin >> des;

    int fair = 0;

    for (int i = 0; i < 8; ++i) 
	{
        if (strcmp(arr[i], src) == 0) 
		{
            temp1 = i;
        }

        if (strcmp(arr[i], des) == 0) 
		{
            temp2 = i;
        }
    }

    if (temp1 == -1 || temp2 == -1) 
	{
        cout << "Invalid source or destination." << endl;
    } 
	else 
	{
        if (temp1 == temp2) 
		{
            fair = 0;  
        }
		else if (temp1 < temp2) 
		{
            for (int j = temp1; j < temp2; ++j) 
			{
                fair += brr[j];
            }
        } 
		else 
		{
            for (int j = temp1; j < 8; ++j) 
			{
                fair += brr[j];
            }
            for (int k = 0; k < temp2; ++k) 
			{
                fair += brr[k];
            }
        }

        if (fair < 1000) 
	    {
            cout << "Fair is " << fair << endl;
        } 
		else if (fair == 1000) 
		{
            cout << "Fair is " << fair + 5 << endl;
        } 
		else if (fair > 1000 && fair <= 2000) 
		{
            cout << "Fair is " << fair + 10 << endl;
        } 
		else if (fair > 2000 && fair <= 3000) 
		{
            cout << "Fair is " << fair + 15 << endl;
        }
    }

    return 0;
}

