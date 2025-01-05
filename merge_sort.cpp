#include <iostream>
using namespace std;

void merge(int arr[], int left, int mid, int right) 
{
    int n1 = mid - left + 1; 
    int n2 = right - mid;  

    int L[n1], R[n2];

    int i = 0;
    while (i < n1) 
    { 
        L[i] = arr[left + i];
        i++;
    }

    int j = 0;
    while (j < n2) 
    { 
        R[j] = arr[mid + 1 + j];
        j++;
    }

    i = 0;
    j = 0;
    int k = left;

    while (i < n1 && j < n2) 
    { 
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) 
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) 
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void merge_sort(int arr[], int left, int right) 
{
    if (left < right) 
    {
        int mid = left + (right - left) / 2;

        merge_sort(arr, left, mid);
        merge_sort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

void display(int arr[], int n) 
{
    int i = 0;
    while (i < n) {
        cout << arr[i] << " ";
        i++;
    }
    cout << endl;
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
    merge_sort(arr, 0, n -1);
    cout << "after: ";
    display(arr, n);
}