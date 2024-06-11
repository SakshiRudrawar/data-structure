#include<iostream>

using namespace std;

int main()
{
    int arr[20] = {4, 10, 24, 36, 48, 70, 83, 94 , 101, 123};
    int beg = 0, end = 9;  
    int mid, num, result = -1; 

    cout << "Enter the number you want to search: ";
    cin >> num;

    while (beg <= end)
    {
        mid = (beg + end) / 2;

        if (arr[mid] == num)
        {
            result = mid;
            break;  
        }
        else if (arr[mid] < num)
        {
            beg = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    if (result != -1)
    {
        cout << "Element found at index " << result << endl;
    }
    else
    {
        cout << "Element not found in the array" << endl;
    }

    return 0;
}

