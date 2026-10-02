# include<iostream>
# include<vector>
using namespace std;
class Solution {
public:
    vector<int> getRow(int numRows) {
        vector<vector<int>> pascaltriangle(numRows+1);
        vector<int>pascalrow;
        for(int i=0;i<=numRows;i++)
        {
            for(int j=0;j<=i;j++)
            {
                if(j==0||j==i)
                {
                    pascaltriangle[i].push_back(1);
                }
                else
                {
                    pascaltriangle[i].push_back(pascaltriangle[i-1][j-1]+pascaltriangle[i-1][j]);
                }
            }
             if(i==numRows-1)
                {
                    for(int k=0;k<pascaltriangle[i].size();k++)
                    {
                        pascalrow.push_back(pascaltriangle[i][k]);
                    }
                }
        }
        return pascalrow;
    }
};
int main()
{
    Solution s;
    vector<int>a=s.getRow(3);
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}