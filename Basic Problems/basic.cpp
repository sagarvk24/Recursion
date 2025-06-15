#include <iostream>
using namespace std;

void nameNTimes(int i, int n)
{
    if (i > n) // base case
        return;

    cout << "Sagar" << " ";

    nameNTimes(i + 1, n);
}

void oneToN(int i, int n)
{
    if (i > n)
        return;

    cout << i << " ";

    oneToN(i + 1, n);
}

void NtoOne(int i, int n)
{
    if (i < 1)
        return;

    cout << i << " ";

    NtoOne(i - 1, n);
}

void oneToN_BackT(int i, int n) // using backtracking
{
    if (i < 1)
        return; // 5 4 3 2 1 .. 0

    oneToN_BackT(i - 1, n);
    cout << i << " "; // 1 2 3 4 5
}

void NtoOne_BackT(int i, int n) //using backtracking
{
    if (i > n)
        return;

    NtoOne_BackT(i + 1, n);

    cout << i << " ";
}


int main()
{
    int n;
    cout << "Enter the value of n = ";
    cin >> n;

    // nameNTimes(1, n);
    // oneToN(1, n);
    // NtoOne(n, n);
    //oneToN_BackT(n, n);
    NtoOne_BackT(1, n);
}