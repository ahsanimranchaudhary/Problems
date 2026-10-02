# include<iostream>
# include<vector>
# include<set>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)
        {
            return 0;
        }
        else if(nums.size()==1)
        {
            return 1;
        }
        set<int>s;
        for (int i=0;i<nums.size();i++)
        {
            s.insert(nums[i]);
        }
        int count=0;
        int x = *s.begin();
        set<int>counts;
        for(auto it=s.begin();it!=s.end();it++)
        {
           if(x+1==*it)
           {
                count++;
           }
           else if(count!=0&&x+1!=*it)
           {
                counts.insert(count);
                count=0;
           }
           x=*it;
        }
        counts.insert(count);
        for(auto it = counts.begin();it!=counts.end();it++)
        {
            count=*it;
        }
        return (count+1);
    }
};


int main()
{
    vector<int>nums = {1,2,6,7,8};
    Solution s;
    int c = s.longestConsecutive(nums);
    // cout<<c;
    return 0;
}