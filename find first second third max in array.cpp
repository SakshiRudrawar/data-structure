#include<iostream>

using namespace std;

int main() 
{
    const int size = 5;
    int arr[size];

    cout << "Enter " << size << " elements for the array:" << endl;

    for (int i = 0; i < size; i++) 
	{
        cout << "Enter element " << ": ";
        cin >> arr[i];
    }

    int firstMax=arr[0] ;
    int secondMax=arr[1] ;
    int thirdMax=arr[2] ;

    for (int i = 0; i < size;i++) 
	{
        if (arr[i] > firstMax) 
		{
            thirdMax = secondMax;
            secondMax = firstMax;
            firstMax = arr[i];
        } 
		else if (arr[i] > secondMax) 
		{
            thirdMax = secondMax;
            secondMax = arr[i];
        } 
		else if (arr[i] > thirdMax) 
		{
            thirdMax = arr[i];
        }
    }

    cout << "Greatest element: " << firstMax << endl;
    cout << "Second greatest element: " << secondMax << endl;
    cout << "Third greatest element: " << thirdMax << endl;
//;;'/[''
    return 0;
}

