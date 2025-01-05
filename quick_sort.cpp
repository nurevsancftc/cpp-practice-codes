#include <iostream>
using namespace std;

int partition(int arr[], int low, int high) 
{
    int pivot = arr[high]; 
    int i = low - 1;
    int j = low;

    while (j < high) 
    { 
        if (arr[j] < pivot) 
        { 
            i++; 
            int temp = arr[i]; 
            arr[i] = arr[j];
            arr[j] = temp;
        }
        j++;
    }

    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;

    return i + 1; 
}

void quickSort(int arr[], int low, int high) 
{
    if (low < high) {
        int pi = partition(arr, low, high); 
        quickSort(arr, low, pi - 1); 
        quickSort(arr, pi + 1, high);
    }
}

void display(int arr[], int n) {
    int i = 0;
    while (i < n) {
        cout << arr[i] << " ";
        i++;
    }
}

int main() 
{
    int i;
    int n;
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

    cout << "before:" ;
    display(arr, n);
    quickSort(arr, 0, n -1);
    cout << "after: ";
    display(arr, n);
}