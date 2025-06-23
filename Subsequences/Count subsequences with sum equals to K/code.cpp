#include <iostream>
#include <vector>
using namespace std;

int countSubsequenceEqualsToK(int index, vector<int> &nums, int k, int currentSum)
{
    if (currentSum > k)
        return 0;
    if (index == nums.size())
    {
        return (currentSum == k) ? 1 : 0;
    }

    int left = countSubsequenceEqualsToK(index + 1, nums, k, currentSum + nums[index]);

    int right = countSubsequenceEqualsToK(index + 1, nums, k, currentSum);

    return left + right;
}

int main()
{
    vector<int> array = {1, 2, 1};

    int sum = 2;

    cout << countSubsequenceEqualsToK(0, array, sum, 0);
}