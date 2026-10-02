# include<iostream>
# include<vector>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int ptr1=0;
        int ptr2=0;
        while(ptr2<nums.size())
        {
            if(nums[ptr1]==0&&nums[ptr2]!=0)
            {
                swap(nums[ptr1],nums[ptr2]);
                ptr1++;
            }
            if(nums[ptr2]==0&&nums[ptr1]!=0)
            {
                int temp=ptr2;
                ptr2=ptr1;
                ptr1=temp;
            }
            ptr2++;
        }
    }
};
int main(){
    vector<int>nums;
    nums.push_back(1);
    nums.push_back(0);
    nums.push_back(1);
    // nums.push_back(3);
    // nums.push_back(12);
    Solution s;
    s.moveZeroes(nums);
    for(int i=0;i<nums.size();i++)
    {
        cout<<nums[i]<<" ";    
    }
    return 0;
}