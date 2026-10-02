# include<iostream>
# include<queue>
using namespace std;
class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) 
    {
        if(tickets.empty())
        {
            return 0;
        }
        queue<int>q;
        for(int i=0;i<tickets.size();i++)
        {
            q.push(i);
        }
        int s=0;
        while(tickets[k]!=0)
        {
            tickets[q.front()]--;
            cout<<"Element: "<<tickets[q.front()]<<"\n";
            if(tickets[q.front()]!=0)
            {
                q.push(q.front());
                q.pop();
            }
            else
            {
                q.pop();
            }
            s++;
            cout<<"Second: "<<s<<endl;
        }
        return s;
    };
};
int main()
{
    Solution s;
    vector<int> v={84,49,5,24,70,77,87,8};
    cout<<s.timeRequiredToBuy(v,3);
    return 0;
}