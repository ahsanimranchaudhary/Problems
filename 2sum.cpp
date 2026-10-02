# include<iostream>
# include<vector>
# include<bits/stdc++.h>
# include<algorithm>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // vector<int>temp;
        // for(int i=0;i<nums.size();i++)
        // {
        //     temp.push_back(nums[i]);
        // }
        // sort(temp.begin(),temp.end());
        // vector<int>indices;
        // int start=0,end=temp.size()-1;
        // int a,b;
        // while(start<end)
        // {
        //     if(temp[start]+temp[end]==target)
        //     {
        //         a=temp[start];
        //         b=temp[end];
        //         break;
        //     }
        //     else if(temp[start]+temp[end]>target)
        //     {
        //         end--;
        //     }
        //     else if(temp[start]+temp[end]<target)
        //     {
        //         start++;
        //     }
        // }
        // for(int i=0;i<nums.size();i++)
        // {
        //     if(nums[i]==a||nums[i]==b)
        //     {
        //         indices.push_back(i);
        //     }
        // }
        // return indices;
 

        // target = 6
        // array=[3,2,4,15] keys for map
        // index=[0,1,2,3]  values for map


        unordered_map<int,int>m;
        vector<int>indices;
        for(int i=0;i<nums.size();i++)
        {
            int first=nums[i];
            int sec=target-first;
            if(m.find(sec)!=m.end())
            {
               indices.push_back(i);
               indices.push_back(m[sec]);
               break; 
            } 
            m[first]=i;
        }
        return indices;
    }
};
int main(){
    vector<int>nums;
    nums.push_back(3);
    nums.push_back(2);
    nums.push_back(4);
    nums.push_back(15);
    Solution s;
    vector<int>a=s.twoSum(nums,6);
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}






// # include<iostream>
// using namespace std;
// int main(){
//     int arr[6]={1,2,4,6,18,25};
//     int start=0,end=5;
//     int target=10;
//     while (start<=end)
//     {
//         if(arr[start]+arr[end]>target)
//         {
//             end--;
//         }
//         else if(arr[start]+arr[end]<target)
//         {
//             start++;
//         }
//         else if(arr[start]+arr[end]==target)
//         {
//             cout<<"found: "<<arr[start]<<" "<<arr[end];
//             break;
//         }
//     }
//     return 0;
// }