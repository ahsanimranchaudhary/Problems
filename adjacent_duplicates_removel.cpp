# include<iostream>
# include<stack>
# include<string>
using namespace std;
class Solution {
public:
    void reversestring(string &s)
    {
        int i=0,j=s.size()-1;
        while(i<=j)
        {
            swap(s[i],s[j]);
            i++;
            j--;
        }
    }
    string removeDuplicates(string s) {
        if(s.empty())
        {
            return string();
        }
        int i=0;
        string a;
        stack<char>st;
        while(i<s.size())
        {
            if(st.empty()||st.top()!=s[i])
            {
                st.push(s[i]);
            }
            else if(s[i]==st.top())
            {
                st.pop();
            }
            i++;
        }
        while(!st.empty())
        {
            a.push_back(st.top());
            st.pop();
        }
        reversestring(a);
        return a;
    }
};
int main()
{
    Solution s;
    cout<<s.removeDuplicates("abbaca");
    return 0;
}