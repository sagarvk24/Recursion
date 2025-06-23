#include <iostream>
#include <vector>
using namespace std;

// Time Complexity : M^N (Where M depends on the target)`

void helperFunction(int index, vector<int> &nums, int sum, vector<int> &ds, vector<vector<int>> &answer)
{
    if (sum == 0)
    {
        answer.push_back(ds);
        return;
    }

    if (index == nums.size() || sum < 0)
        return;

    // include
    ds.push_back(nums[index]);
    helperFunction(index, nums, sum - nums[index], ds, answer);
    ds.pop_back();

    // not include
    helperFunction(index + 1, nums, sum, ds, answer);
}

vector<vector<int>> combinationSum(vector<int> candidates, int target)
{
    vector<vector<int>> ans;
    vector<int> ds;

    helperFunction(0, candidates, target, ds, ans);

    return ans;
}

int main()
{
    vector<int> candidates = {2, 3, 6, 7};
    int target = 7;

    vector<vector<int>> result = combinationSum(candidates, target);

    for (const auto &combination : result)
    {
        for (int num : combination)
        {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}