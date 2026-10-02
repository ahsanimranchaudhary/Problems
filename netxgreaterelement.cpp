# include<iostream>
# include<bits/stdc++.h>
using namespace std;
class Solution {
public: 
    vector<int>NextGreaterElement(vector<int>&nums)
    {
        vector<int>ans(nums.size(),-1);
        stack<int>st;
        for(int i=0;i<nums.size();i++)
        {
            while (!st.empty()&&nums[st.top()]<nums[i])
            {
                ans[st.top()]=nums[i];
                st.pop();
            }
            st.push(i);
        }
        return ans;
    }
};