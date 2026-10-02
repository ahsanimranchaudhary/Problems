# include<iostream>
# include<string>
# include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    void reverese(string &a)
    {
        int front=0,back=a.size()-1;
        while (front<back)
        {
            swap(a[front],a[back]);
            front++;
            back--;
        }
        
    }

    string clearDigits(string s) 
    {
        stack<char>st;
        for(int i=0;i<s.size();i++)
        {
            if(!(s[i]>='0'&&s[i]<='9'))
            {
                st.push(s[i]);
            }
            else
            {
                if(!st.empty())
                {
                    st.pop();
                }                
            }
        }
        if(st.empty())
        {
            return string();
        }
        string r;
        while (!st.empty())
        {
            r.push_back(st.top());
            st.pop();
        }
        reverese(r);
        return r;
    }
};


int main()
{
    Solution s;
    string a;
    cout<<"Enter your string:";
    cin>>a;
    a=s.clearDigits(a);
    cout<<a;
}