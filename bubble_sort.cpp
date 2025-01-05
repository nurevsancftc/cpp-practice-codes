#include <iostream>
using namespace std;

void	bubble_sort(int *arr, int n)
{
	int a;
	int b;
	int c;

	a = 0;
	while(a <= n)
	{
		b = a + 1;
		while(b < n)
		{
			if(arr[a] > arr[b])
			{
				c = arr[b];
				arr[b] = arr[a];
				arr[a] = c;
			}
			b++;
		}
		a++;
	}
}

void	display(int *arr, int n)
{
	int i = 0;
	while(i < n)
	{
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
	cout << "enter elements: " << endl;

	i = 0;
	while(i < n)
	{
		cin >> arr[i];
		i++;
	}
	cout << "before: ";
	display(arr, n);
	bubble_sort(arr, n);
	cout << " after: ";
	display(arr, n);
}
