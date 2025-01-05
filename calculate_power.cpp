#include <iostream>
using namespace std;

int calculate(int base, int power)
{
    if (power != 0)
        return (base * calculate(base, power - 1));
    else
        return 1;
}

int main()
{
    int base, power, result;

    cout << "enter base number : ";
    cin >> base;

    cout << "enter power number(positive integer): ";
    cin >> power;

    result = calculate(base, power);
    cout << base << "^" << power << " = " << result;

    return 0;
}