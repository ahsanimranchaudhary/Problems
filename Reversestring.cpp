# include<iostream>
# include<vector>
using namespace std;
class Solution {
public:
    void reverseString(vector<char>& s) {
        int a=0,b=s.size()-1;
        while(a<=b)
        {
            swap(s[a],s[b]);
            a++;
            b--;
        }
    }
};
int main()
{
    Solution s;
    vector<char>a={'h','e','l','l','o'};
    s.reverseString(a);
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i];
    }
    return 0;
}