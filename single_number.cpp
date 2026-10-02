# include<iostream>
# include<vector>
using namespace std;
class Solution {
public:
    int singleNumber(vector<int>& nums){
        if(nums.size()==1)
        {
            return nums[0];
        }
        else if(nums.size()==0)
        {
            return 0;
        }
        int res=0;
        for(int i=0;i<nums.size();i++)
        {
            res=res^nums[i];
        }
        return res;
    }
};
int main()
{
    vector<int>a;
    a.push_back(2);
    a.push_back(2);
    a.push_back(1);
    Solution s;
    int b=s.singleNumber(a);
    cout<<b;
    return 0;
}