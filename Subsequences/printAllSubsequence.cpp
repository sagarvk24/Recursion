#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int> &nums)
{
    if (nums.empty())
    {
        cout << "{}";
    }
    else
    {
        for (int num : nums)
            cout << num << " ";
    }
    cout << endl;
}

// Take and Not-Take
void allSubsequences(int index, vector<int> &ds, vector<int> &arr)
{
    if (arr.empty())
    {
        cout << "Empty Array" << endl;
        return;
    }

    if (index == arr.size())
    {
        printVector(ds);
        return;
    }

    // Take or Pick the particular index into the subsequence
    ds.push_back(arr[index]);
    allSubsequences(index + 1, ds, arr);
    ds.pop_back();

    // Not take condition, this element is not added to the subsequence
    allSubsequences(index + 1, ds, arr);
}

int main()
{
    vector<int> subSqnce;
    vector<int> arr = {3, 1, 2};

    allSubsequences(0, subSqnce, arr);

    return 0;
}