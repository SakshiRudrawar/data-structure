#include<iostream>
using namespace std;

const int size = 5;

void insertionSort(int *arr)
{
    int key, j;

    for (int i = 1; i < size; i++)
    {
        key = arr[i];
        j = i - 1;

    
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;

        cout << "\nSorted array: ";
        for (int k = 0; k < size; k++)
        {
            cout << "\t" << arr[k];
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

    insertionSort(arr);

    cout << "\n\nFinal Sorted array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

