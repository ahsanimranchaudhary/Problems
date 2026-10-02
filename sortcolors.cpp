# include<iostream>
# include<queue>
# include<vector>
using namespace std;
class Solution {
public:
    void sortColors(vector<int>& nums) {
        priority_queue<int,vector<int>,greater<int>>q;
        for(int i=0;i<nums.size();i++)
        {
            q.push(nums[i]);
        }
        int i=0;
        while(!q.empty())
        {
            nums[i++]=q.top();
            q.pop();
        }
    }
};
int main()
{
    Solution s;
    vector<int>a={2,0,2,1,1,0};
    s.sortColors(a);
    for (int i = 0; i < a.size(); i++)
    {
        cout<<a[i]<<" ";
    }
    
    return 0;
}