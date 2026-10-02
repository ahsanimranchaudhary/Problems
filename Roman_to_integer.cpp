# include<iostream>
# include<bits/stdc++.h>
using namespace std;
class Solution 
{
public:
    int romanToInt(string s) 
    {
        unordered_map<char,int>mp;
        mp['I']=1;
        mp['V']=5;
        mp['X']=10;
        mp['L']=50;
        mp['C']=100;
        mp['D']=500;
        mp['M']=1000;
        int res = 0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='I'&&i+1<s.size()&&s[i+1]=='V')
            {
                res+=mp['V']-mp['I'];
                i++;
            }
            else if(s[i]=='I'&&i+1<s.size()&&s[i+1]=='X')
            { 
                res+=mp['X']-mp['I'];
                i++;
            }
            else if(s[i]=='X'&&i+1<s.size()&&s[i+1]=='L')
            { 
                res+=mp['L']-mp['X'];
                i++;
            }
            else if(s[i]=='X'&&i+1<s.size()&&s[i+1]=='C')
            { 
                res+=mp['C']-mp['X'];
                i++;
            }
            else if(s[i]=='C'&&i+1<s.size()&&s[i+1]=='D')
            { 
                res+=mp['D']-mp['C'];
                i++;
            }
            else if(s[i]=='C'&&i+1<s.size()&&s[i+1]=='M')
            { 
                res+=mp['M']-mp['C'];
                i++;
            }
            else
            {
                res+=mp[s[i]];
            }
        }
        return res;
    }
};
int main()
{
    Solution s;
    cout<<s.romanToInt("IX");
    return 0;
}