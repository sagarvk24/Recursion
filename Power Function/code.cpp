#include <iostream>
using namespace std;

double myPower(double num, int pow)
{
    long long power = pow;
    double ans = 1;
    if (power < 0)
    {
        num = 1 / num;
        power *= -1;
    }

    while (power > 0)
    {
        if (power % 2 != 0)
        {
            ans *= num;
            power -= 1;
        }

        else
        {
            num *= num;
            power /= 2;
        }
    }

    return ans;
}

int main()
{
    double base = 2;
    int exponent = -4;

    cout << "Result = " << myPower(base, exponent) << endl;

    return 0;
}