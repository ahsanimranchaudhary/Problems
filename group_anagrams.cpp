# include<iostream>
# include<bits/stdc++.h>
# include<string>
using namespace std;
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
        unordered_map<string,vector<string>>m;
        vector<vector<string>> anagrams;
        for (int i = 0; i < strs.size(); i++)
        {
            string k = strs[i];
            sort(k.begin(),k.end());
            m[k].push_back(strs[i]);
        }
        for(unordered_map<string,vector<string>>::iterator it=m.begin();it!=m.end();it++)
        {
            anagrams.push_back(it->second);
        }
        return anagrams;
    }
};

int main()
{
    vector<string>a={"ac","c"};
    vector<vector<string>>anagrams;
    Solution s;
    anagrams=s.groupAnagrams(a);
    for(int i=0;i<anagrams.size();i++)
    {
        for(int j=0;j<anagrams[i].size();j++)
        {
            cout<<anagrams[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}