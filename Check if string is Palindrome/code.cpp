#include <iostream>
#include <string>
using namespace std;

bool isPalindromeString(const string &s, int size, int i)
{
    if (i >= size / 2)
        return true;

    if (s[i] != s[size - i - 1])
        return false;

    return isPalindromeString(s, size, i + 1);
}

int main()
{
    string str;

    cout << "Enter any string = ";
    getline(cin, str);

    bool palString = isPalindromeString(str, str.length(), 0);

    if (palString)
        cout << "Yes, it's a Palindrome!" << endl;
    else
        cout << "No, not a Palindrome!" << endl;

    return 0;
}