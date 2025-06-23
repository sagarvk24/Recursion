#include <iostream>
#include <vector>
using namespace std;

void printSubsequenceSum(int index, vector<int> &ds, vector<int> &arr, int sum, int variableSum)
{
    int n = arr.size();
    if (index == n)
    {
        if (variableSum == sum)
        {
            for (auto it : ds)
                cout << it << " ";
            cout << endl;
        }
        return;
    }

    // Pick
    ds.push_back(arr[index]);
    variableSum += arr[index];
    printSubsequenceSum(index + 1, ds, arr, sum, variableSum);
    variableSum -= arr[index];
    ds.pop_back();

    // Not-Pick
    printSubsequenceSum(index + 1, ds, arr, sum, variableSum);
}

int main()
{
    vector<int> array = {1, 2, 1};
    int sum = 2;
    vector<int> ds;
    printSubsequenceSum(0, ds, array, sum, 0);

    return 0;
}