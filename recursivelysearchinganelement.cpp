# include<iostream>
using namespace std;
bool recursivefind(int arr[],int target,int n,int i=0)
{
    if(arr[i]==target)
    {
        return true;
    }
    if(i>=n)
    {
        return false;
    }
    bool a=recursivefind(arr,target,n,++i);
    return a;
}
int main()
{
    int arr[]={3,4,5,6,7,8};
    bool b=recursivefind(arr,10,6);
    if(b)
    {
        cout<<"Found\n";
    }
    else
    {
        cout<<"Not found\n";
    }
    return 0;
}