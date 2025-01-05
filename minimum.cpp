#include <iostream>
using namespace std;

int main()
{
    int i;
    int minimum;
    int a[] = {80, 60, 7, 10, 109, 38, 12, 16, 10, 206};
    char ch;
    minimum = a[0];
    cout << "\nThe data element of array: ";
    for (i = 0; i < 10; i++)
    {
        cout << " " << a[i];
        if (minimum > a[i])
            minimum = a[i];
    }
    cout << "\n\nMinimum of the data elements of array using linear search is: " << minimum;
    return(0);
}