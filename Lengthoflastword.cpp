# include<iostream>
# include<string>
# include<cctype>
using namespace std;
class Solution {
public:
    int lengthOfLastWord(string s)
    {
        int l=0;
        for(int i=0;i<s.size();i++)
        {
            char c=s[i];
            s[i]=tolower(c);
        }
        int j=s.size()-1;
        while(s[j]==' ')
        {
            j--;
        }
        while(s[j]>='a'&&s[j]<='z')
        {
            l++;
            j--;
        }
        return l;
    };
};
int main()
{
    Solution s;
    int a=s.lengthOfLastWord("day");
    cout<<a;
    return 0;
}