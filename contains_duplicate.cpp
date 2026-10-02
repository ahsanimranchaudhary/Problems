# include<iostream>
# include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) 
    {
        //hashset approach
        // set<int>s;
        // for(int i=0;i<nums.size();i++)
        // {
        //     if(s.find(nums[i])!=s.end())
        //     {
        //         return true;
        //     }
        //     s.insert(nums[i]);
        // }
        // return false;
        // hashmap approach
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
            if(m[nums[i]]>1)
            {
                return true;
            }
        }
        return false;
    }
};


int main()
{
    vector<int>nums={1,2,3,1};
    Solution s;
    bool duplicate=s.containsDuplicate(nums);
    if(duplicate)
    {
        cout<<"found duplicates";
    }
    else
    {
        cout<<"No duplicates";
    }
    return 0;
}