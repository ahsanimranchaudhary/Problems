# include<iostream>
# include<vector>
# include<algorithm>
using namespace std;
class Solution
{
public:
    int removeDuplicates(vector<int>&nums)
    {
        int i=0,j=1;
        while (j<nums.size())
        {
            if(nums[i]!=nums[j])
            {
                i++;
                nums[i]=nums[j];
            }
            j++;
        }
        return i+1;
    }
};
int main()
{
    vector<int>v={1,1,2};
    Solution s;
    s.removeDuplicates(v);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}