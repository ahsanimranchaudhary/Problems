# include<string>
# include<iostream>
# include<vector>
# include<algorithm>
using namespace std;
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int a,i=0;
        a=nums2.size()-1;
        if(nums2.empty()||n==0)
        {
            return;
        }
        if(m==0)
        {
            nums1=nums2;
            return;
        }
        while(a>=0)
        {
            if(nums2[a]<nums1[i])
            {
                for(int j=nums1.size()-1;j>i;j--)
                {
                    nums1[j]=nums1[j-1];
                }
                nums1[i]=nums2[a];
                a--;
                i=-1;
            }
            else if(nums1[i]==0&&i>=m)
            {
                nums1[i]=nums2[a];
                a--;
                i=-1;
            }
            if(nums2[a]==0&&nums1[i]==0)
            {
                nums1[i]=0;
                i=-1;
            }
            i++;
        }
    }  
};
int main(){
    vector<int>n1;
    vector<int>n2;
    n1.push_back(4);
    n1.push_back(5);
    n1.push_back(6);
    n1.push_back(0);
    n1.push_back(0);
    n1.push_back(0);
    // n1.push_back(0);
    n2.push_back(1);
    n2.push_back(2);
    n2.push_back(3);
    // n2.push_back(2);
    // n2.push_back(3);
    Solution s;
    s.merge(n1,3,n2,3);
    for(int i=0;i<6;i++)
    {
        cout<<n1[i]<<" ";
    }
    return 0;
}
