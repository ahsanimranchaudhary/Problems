# include<iostream>
using namespace std;
class Solution {
public:
    double myPow(double x, int n) 
    {
        if(x==0)
        {
            return 0;
        }
        else if(n==0)
        {
            return 1.0;
        }
        else if(x==1)
        {
            return 1.0;
        }
        else if(x==-1)
        {
            if(n&1)
            {
                return -1.0;
            }
            else
            {
                return 1.0;
            }
        }
        bool flag=false;
        if(n<0)
        {
            n*=-1;
            flag=true;
        }
        if(n==1)
        {
            return x;
        }
        if(flag)
        {
            return 1/(x*myPow(x,n-1));
        }
        return x*myPow(x,n-1);      
    }
};
int main()
{
    Solution s;
    cout<<s.myPow(3.0,4);
    return 0;
}