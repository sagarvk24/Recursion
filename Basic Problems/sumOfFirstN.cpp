#include <iostream>
using namespace std;

// Parametised Way
void sumN(int i, int sum)
{
    if (i < 1)
    {
        cout << "Sum = " << sum << " ";
        return;
    }

    sumN(i - 1, sum + i);
}

// Functional way
int sum_N(int n)
{
    if (n == 0)
        return 0; 

    return n + sum_N(n - 1);
}

int main()
{
    int n;

    cout << "Enter the value of n = ";
    cin >> n;

    // sumN(n, 0);

    int sum = sum_N(n);

    cout << "Sum = " << sum << endl;
    return 0;
}