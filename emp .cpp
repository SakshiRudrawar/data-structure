#include<iostream>
#include<cstring>

using namespace std;

class emp 
{
public:
    int id;
    char name[20];
    double salary;

    void display() 
    {
        cout << "id: " << id << " name: " << name << " salary: " << salary << endl;
    }
};

void bubbleSortById(emp arr[], int n) 
{
    emp temp;

    for(int i = 0; i < n - 1; i++) 
    {
        for(int j = 0; j < n - 1 - i; j++) 
        {
            if(arr[j].id > arr[j + 1].id) 
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void bubbleSortBySalary(emp arr[], int n) 
{
    emp temp;

    for(int i = 0; i < n - 1; i++) 
    {
        for(int j = 0; j < n - 1 - i; j++) 
        {
            if(arr[j].salary > arr[j + 1].salary) 
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
    emp arr[5];

    for(int i = 0; i < 5; i++) 
    {
        cout << "Enter the id: ";
        cin >> arr[i].id;

        cout << "Enter the name: ";
        cin >> arr[i].name;

        cout << "Enter the salary: ";
        cin >> arr[i].salary;
    }

    int choice;

    do {
        cout << "\n************* Menu *****************\n";
        cout << "\t 1. sort by id\n";
        cout << "\t 2. sort by salary \n";
        cout << "\t Enter your choice: ";
        cin >> choice;

        switch (choice) 
        {
            case 1:
                bubbleSortById(arr, 5);
                break;

            case 2:
                bubbleSortBySalary(arr, 5);
                break;
        }

        cout << "\nSorted result:\n";
        for(int i = 0; i < 5; i++) 
        {
            arr[i].display();
        }

    } while (choice != 0);

    return 0;
}

