# include<iostream>
# include<queue>
# include<vector>
# include<cstdlib>
# include<cmath>
using namespace std;
class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) 
    {
        long long score=0;
        priority_queue<int>pq;
        for(int i=0;i<nums.size();i++)
        {
            pq.push(nums[i]);
        }
        while (k>0)
        {
            int a=pq.top();
            score+=a;
            pq.pop();
            pq.push(ceil(a/3.0));
            k--;
        }
        return score;
    }
};
int main()
{
    srand(time(0));
    vector<int>a={1,10,3,3,3};
    Solution s;
    cout<<s.maxKelements(a,3);
    // cout<<(ceil(10/3.0));
    return 0;
}