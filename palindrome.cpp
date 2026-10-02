# include<iostream>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
        {
            return false;
        }
        int rev=0;
        int a=x;
        while(a!=0)
        {
            rev=rev*10+(a%10);
            a=a/10;
        }
        if(rev==x)
        {
            return true;
        }
        return false;
    }
};
int main()
{
    Solution s;
    if(s.isPalindrome(22))
    {
        cout<<"Palindrome\n";
    }
    else
    {
        cout<<"Not\n";
    }

}