#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        vector<int> prefix;
        vector<int> suffix;
        for (int i = 0; i < nums.size(); i++)
        {
            if (i == 0)
            {
                prefix.push_back(1);
            }
            else
            {
                prefix.push_back(prefix[i - 1] * nums[i - 1]);
            }
        }
        for (int i = nums.size() - 1; i >= 0; i--)
        {
            if (i == nums.size() - 1)
            {
                suffix.push_back(1);
            }
            else
            {
                suffix.push_back(suffix[suffix.size() - 1] * nums[i + 1]);
            }
        }

        vector<int> answer;
        for (int i = 0, j = nums.size() - 1; i < nums.size() || j >= 0; i++, j--)
        {
            answer.push_back(suffix[j]*prefix[i]);
        }
        return answer;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {1, 2, 3, 4};
}