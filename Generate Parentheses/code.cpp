#include <iostream>
#include <vector>
using namespace std;

void helperFunction(string str, int open, int close, vector<string> &list, int n)
{
    if (open > n)
        return;

    if (open + close == 2 * n && open == close)
    {
        list.push_back(str);
        return;
    }

    helperFunction(str + '(', open + 1, close, list, n);

    if (open > close)
    {
        helperFunction(str + ')', open, close + 1, list, n);
    }
}

vector<string> generateParentheses(int n)
{
    vector<string> answer;

    helperFunction("", 0, 0, answer, n);

    return answer;
}

int main()
{
    int noOfParentheses = 3;

    vector<string> paranthesesVector = generateParentheses(noOfParentheses);

    for (auto it : paranthesesVector)
    {
        cout << it << " ";
    }

    cout << endl;

    return 0;
}