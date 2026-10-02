# include<iostream>
# include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
        priority_queue<pair<int,int>>pq;
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]+=1;
        }
        for(auto it = m.begin();it != m.end(); it++)
        {
            pq.push({it->second,it->first});
        }
        vector<int>ans;
        while (k)
        {
            pair<int,int>p=pq.top();
            pq.pop();
            ans.push_back(p.second);
            k--;
        }
        return ans;
    }
};

int main()
{
    Solution s;
    vector<int>nums = {1,2,1,2,1,2,3,1,3,2};
    vector<int>ans = s.topKFrequent(nums,2);
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
}