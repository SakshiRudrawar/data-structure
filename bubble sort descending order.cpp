#include<iostream>
using namespace std;

const int size = 5;

void bubbleSort(int *arr) 
{
    int temp;

    for (int i = 0; i < size - 1; i++) 
	{
        for (int j = 0; j < size - 1 - i; j++) 
		{
            if (arr[j] < arr[j + 1]) 
			{
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() 
{
    int arr[size];

    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) 
	{
        cin >> arr[i];
    }

    bubbleSort(arr);

    cout << "\nSorted array: ";
    for (int i = 0; i < size; i++) 
	{
        cout << arr[i] << " ";
    }

    return 0;
}






