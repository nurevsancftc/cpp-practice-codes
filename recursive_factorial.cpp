#include <iostream>
using namespace std;

int	recursive_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb > 0)
	{
		result *= nb * recursive_factorial(nb - 1);
		nb -= 1;
	}
	if (nb < 0)
		return (0);
	return (result);
}

int main()
{
	int nb;
	cout << "enter element: " << endl;
    cin >> nb;
    if(nb < 0)
        cout << "don't calculate" << endl;
    else
        cout << "factorial of " << nb << "is = " << recursive_factorial(nb);
	return (0);
	
}
