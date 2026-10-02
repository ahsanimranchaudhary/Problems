# include<iostream>
# include<string>
# include<stack>
using namespace std;
class Solution {
public:
    string reversePrefix(string word, char ch) {
        int i;
        stack<char>st;
        bool flag;
        for(int j=0;j<word.size();j++)
        {
            if(word[j]!=ch)
            {
                st.push(word[j]);
                flag=false;
            }
            else
            {
                flag=true;
                i=j;
                st.push(word[j]);
                break;
            }
        }
        if(!flag)
        {
            return word;
        }
        int b=0;
        while(!st.empty()&&b<=i)
        {
            char a=st.top();
            word[b++]=a;
            st.pop();
        }
        return word;
    }
};

int main()
{
    string a="abcd";
    char ch='z';
    Solution s;
    cout<<s.reversePrefix(a,ch);
    return 0;
}