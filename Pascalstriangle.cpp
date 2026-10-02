# include<iostream>
# include<vector>
using namespace std;
// long factorial(int n)
// {
//     int count=1,res=1;
//     while(count<=n)
//     {
//         res=res*count;
//         count++;
//     }
//     return res;
// }
// long combination(int n,int r)
// {
//     return factorial(n)/(factorial(r)*factorial(n-r));
// }
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pascaltriangle(numRows);
        for(int i=0;i<numRows;i++)
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
            cout<<endl;
        }
        return pascaltriangle;
    }
};
int main()
{
    Solution s;
    s.generate(20);
    return 0;
}
