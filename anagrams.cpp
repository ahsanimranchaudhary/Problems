# include<iostream>
# include<bits/stdc++.h>
# include<algorithm>
using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        unordered_map<char,int>m; // frequency for each character
        for(char c: s)
        {
            m[c]++;
        }
        for(char c :t)
        {
            if(m.find(c)==m.end()||m[c]==0)
            {
                return false;
            }
            m[c]--;
        }
        return true;
    }
};

int main()
{
    return 0;
}
