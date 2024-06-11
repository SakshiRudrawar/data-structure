#include<iostream>a
using namespace std;

const int size = 5;

void selectionSort(int *arr)
{
    int min, index;

    for (int j = 0; j < size - 1; j++)
    {
        min = arr[j];
        index = j;

        for (int i = j; i < size; i++) 
        {
            if (min > arr[i])
            {
                min = arr[i];
                index = i;
            }
        }

        int t = arr[j];
        arr[j] = arr[index];
        arr[index] = t;


        cout << "\nSorted array : ";
        for (int i = 0; i < size; i++)
        {
            cout <<"\t"<<arr[i];
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

    selectionSort(arr);
    
         cout << "  \n \nSorted array : ";
        for (int i = 0; i < size; i++)
        {
            cout <<arr[i]<<" ";
        }

    return 0;
}

