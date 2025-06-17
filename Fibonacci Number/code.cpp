#include <iostream>
using namespace std;

int fibonacciSeries(int n)
{
    if (n <= 1)
        return n;

    int firstNum = fibonacciSeries(n - 1);
    int secondNum = fibonacciSeries(n - 2);

    return firstNum + secondNum;
}

int main()
{
    int n;

    cout << "Enter the value of n = ";
    cin >> n;

    fibonacciSeries(n);
    return 0;
}