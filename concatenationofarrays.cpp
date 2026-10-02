# include<iostream>
# include<vector>
using namespace std;
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>ans(2*nums.size());
        int j=0;
        for(int i=0;i<ans.size();i++)
        {
            ans[i]=nums[j++];
            if(i==(ans.size()/2)-1)
            {
                j=0;
            }
        }
        return ans;
    }
};
int main()
{
    vector<int>v={1,2,1};
    Solution s;
    vector<int>a=s.getConcatenation(v);
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}