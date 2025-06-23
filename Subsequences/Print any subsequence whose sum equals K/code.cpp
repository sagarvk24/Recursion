#include <iostream>
#include <vector>
using namespace std;

bool printAnySubsequenceSum(int index, vector<int> &ds, vector<int> &arr, int sum, int variableSum)
{
    int size = arr.size();

    // Base case
    if (index == size)
    {
        // Condition satisfied
        if (variableSum == sum)
        {
            for (auto it : ds)
                cout << it << " ";
            cout << endl;

            return true;
        }
        // Condition not satisfied
        else
            return false;
    }

    ds.push_back(arr[index]);
    variableSum += arr[index];

    // Pick
    if (printAnySubsequenceSum(index + 1, ds, arr, sum, variableSum) == true)
        return true;

    variableSum -= arr[index];

    ds.pop_back();

    // Not Pick
    if (printAnySubsequenceSum(index + 1, ds, arr, sum, variableSum) == true)
        return true;

    return false;
}

int main()
{
    vector<int> ds;
    vector<int> array = {1, 2, 1};
    int sum = 2;

    printAnySubsequenceSum(0, ds, array, sum, 0);

    return 0;
}