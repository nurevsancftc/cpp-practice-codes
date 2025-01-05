#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int x) 
{
    int i = 0;
    while (i < n) 
    { 
        if (arr[i] == x) 
        { 
            return (i); 
        }
        i++; 
    }
    return (-1); 
}

int main()
{
    int i;
    int n;
    int x;
    cout << "enter n: ";
    cin >> n;
    int arr[n];
    cout << "enter elements: ";

    i = 0;
    while(i < n)
    {
        cin >> arr[i];
        i++;
    }
    cout << "enter x: ";
    cin >> x;
    int result = linearSearch(arr, n, x);

    if (result != -1)
        cout << "element " << x << " is found at index " << result << endl;
    else
        cout << "element " << x << " is not found this array" << endl;

}