#include <iostream>
using namespace std;

void insertion_sort(int arr[], int n) 
{
    int i = 1; 
    while (i < n) 
    { 
        int key = arr[i]; 
        int j = i - 1;

        while (j >= 0 && arr[j] > key) 
        {
            arr[j + 1] = arr[j]; 
            j = j - 1;
        }
        arr[j + 1] = key; 

        i++;
    }
}

void display(int arr[], int n) 
{
    int i = 0;
    while (i < n) 
    {
        cout << arr[i] << " ";
        i++;
    }
    cout << endl;
}

int main()
{
	int n;
	int i;
	cout << "enter n: ";
	cin >> n;
	int arr[n];
	cout << "enter elements: " << endl;

	i = 0;
	while(i < n)
	{
		cin >> arr[i];
		i++;
	}
	cout << "before: ";
	display(arr, n);
	insertion_sort(arr, n);
	cout << "\nafter: ";
	display(arr, n);
}
