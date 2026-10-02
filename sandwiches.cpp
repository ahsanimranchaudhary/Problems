# include<iostream>
# include<vector>
# include<queue>
# include<stack>
using namespace std;
class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int>stds;
        stack<int>sndws;
        for(int i=0;i<students.size();i++)
        {
            stds.push(i);
        }
        for(int i=0;i<sandwiches.size();i++)
        {
            sndws.push(i);
        }
        int count=0;
        int stopping=0;
        while (!(stds.empty())&&(stopping!=stds.size()))
        {
            if(students[stds.front()]!=sandwiches[sndws.top()])
            {
                stds.push(stds.front());
                stds.pop();
                stopping++;
            }
            else if(students[stds.front()]==sandwiches[sndws.top()])
            {
                stds.pop();
                sndws.pop();
                count++;
                stopping=0;
            }
        }
        return (students.size()-count);
    }
};
int main()
{
    1,1,1,0,0,1;
    vector<int>stds={1,1,1,0,0,1};
    stds.push_back(2);
    1,0,0,0,1,1;
    vector<int>sndws={1,1,0,0,0,1};
    Solution s;
    s.countStudents(stds,sndws);
    return 0;
}