#include<iostream>

using namespace std;

int main()
{
    int arr[5];
    int brr[5];
    int sum[5] = {0};

    cout << "Enter elements for array 1:";

    for(int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter elements for array 2:";

    for(int i = 0; i < 5; i++)
    {
        cin >> brr[i];
    }

    cout << "Sum of the arrays: ";

    for(int i = 0; i < 5; i++)
    {
        sum[i] = arr[i] + brr[i];
        cout <<" \n sum is :" <<sum[i];
    }

    return 0;
}

