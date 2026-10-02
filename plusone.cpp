# include<iostream>
# include<vector>
# include<stack>
using namespace std;
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        digits[digits.size()-1]+=1;
        if(digits[digits.size()-1]==10)
        {
            int k=digits.size()-1;
            while (k>0&&digits[k]==10)
            {
                digits[k]=0;
                digits[k-1]+=1;
                k--;
            }
            if(digits[0]==10)
            {
                digits[0]=1;
                digits.push_back(0);
            }
        }
        return digits;
    }
};
int main(){
    Solution s;
    vector<int>digits;
    digits.push_back(1);
    digits.push_back(2);
    digits.push_back(3);
    digits.push_back(4);
    digits=s.plusOne(digits);
    for(int i=0;i<digits.size();i++)
    {
        cout<<digits[i]<<" ";
    }
    return 0;
}