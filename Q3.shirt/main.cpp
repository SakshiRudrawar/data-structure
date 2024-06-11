#include "shirt.h"
#include <iostream>

using namespace std;

int main() 
{
    shirt s1;
    shirt s2(101, "formal shirt", "formal", 2000.00, 'm');

    cout << "Shirt 1 details:\n";
    s1.showshirt();

    cout << "\nShirt 2 details:\n";
    s2.showshirt();

    cout << "\nApplying size discount to shirt 2:\n";
    s2.applysizeCount(s2);

    return 0;
}



