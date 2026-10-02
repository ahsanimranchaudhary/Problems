# include<iostream>
# include<algorithm>
# include<string>
# include<cctype>
using namespace std;
char loweracase(char c)
{
    return towlower(c);
}
class Solution {
public:
    bool isPalindrome(string s) 
    {
        for(int i=0;i<s.size();i++)
        {
            if(s[i]>='A'&&s[i]<='Z')
            {
                s[i]=loweracase(s[i]);
            }
        }
        for(int i=0;i<s.size();i++)
        {
            if(!(s[i]>='a'&&s[i]<='z')&&!(s[i]>='0'&&s[i]<='9'))
            {
                s.erase(s.begin()+i);
                i--;
            }
        }
        cout<<s;
        int j=s.size()-1;
        for(int i=0;i<s.size();i++,j--)
        {
            if(s[i]!=s[j])
            {
                return false;
            }
        }
        return true;
    }

};
int main()
{
    Solution s;
    bool a=s.isPalindrome("Zeus was deified, saw Suez.");
    if(a)
    cout<<"Yes";
    else
    cout<<"No";
    return 0;
}