# include<iostream>
# include<vector>
# include<string>
using namespace std;
void reversearray(vector<int>&nums)
{   
    if(nums.size()==1)
    {
        return;
    }
    int a=nums[0];
    nums.erase(nums.begin()+0);
    reversearray(nums);
    nums.push_back(a);
}
void reversestring(string &a)
{
    if(a.size()==1)
    {
        return ;
    }
    char temp=a[0];
    a.erase(a.begin()+0);
    reversestring(a);
    a.push_back(temp);
}
int main()
{
    vector<int>arr={1,2,3,4};
    cout<<"Before\n";
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n"<<"After\n";
    reversearray(arr);
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    string a="AHSAN";
    cout<<"Before: "<<a<<endl;
    reversestring(a);
    cout<<"after: "<<a;
    return 0;
}