#include <iostream>
using namespace std;

int factorial(int n)
{
    // Base Case
    if (n == 0)
        return 1;

    return n * factorial(n - 1);
    // 5 * f(4)... 120
    // 4 * f(3) ... 24
    // 3 * f(2) ... 6
    // 2 * f(1)... 2
    // 1 * f(0) ... 1
    // f(0) -> 1
}

int main()
{
    int n;

    cout << "Enter the number for which you wish to calculate factorial = ";
    cin >> n;

    int fact = factorial(n);

    cout << "Factorial of " << n << " = " << fact << endl;

    return 0;
}