#include <iostream>
#include <vector>
using namespace std;

void helperFunction(int index, vector<int> &nums, vector<int> &ds, vector<vector<int>> &list)
{
    if (index == nums.size())
    {
        list.push_back(ds);
        return;
    }

    // including the current element
    ds.push_back(nums[index]);
    helperFunction(index + 1, nums, ds, list);
    ds.pop_back();
    // Not including
    helperFunction(index + 1, nums, ds, list);
}

vector<vector<int>> powerSet(vector<int> &nums)
{
    vector<vector<int>> answer;
    vector<int> ds;

    helperFunction(0, nums, ds, answer);

    return answer;
}
int main()
{
    vector<int> numArray = {1,2,3};

    vector<vector<int>> result = powerSet(numArray);

    for(const auto &subset: result)
    {
        cout<<"[";
        for(int num: subset)
        {
            cout<<num<<" ";
        }
        cout<<"]"<<endl;
    }
    return 0;
}