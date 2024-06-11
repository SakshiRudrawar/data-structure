#include <iostream>

using namespace std;

const int rows = 3;
const int cols = 3;

int main() 
{
    
    int arr[rows][cols] = {{2, 3, 5}, {5, 6, 8}, {4, 1, 7}};


    /*
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }
    */ 

    int maxVal = arr[0][0];
    int minVal = arr[0][0];

    for (int i = 0; i < rows; i++) 
	{
        for (int j = 0; j < cols; j++) 
		{
            if (arr[i][j] > maxVal) 
			{
                maxVal = arr[i][j];
            }
            if (arr[i][j] < minVal) 
			{
                minVal = arr[i][j];
            }
        }
    }

    cout << "Maximum value: " << maxVal << endl;
    cout << "Minimum value: " << minVal << endl;

    return 0;
}


