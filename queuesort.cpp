# include<iostream>
# include<bits/stdc++.h>
using namespace std;

void insertatfront(queue<int>&q,int temp)
{
    queue<int>tmp;
    while(!q.empty())
    {
        tmp.push(q.front());
        q.pop();
    }
    q.push(temp);
    while (!tmp.empty())
    {
        q.push(tmp.front());
        tmp.pop();
    }   
    
}

void sortqueue(queue<int>&q)
{
   vector<int>v;
    while(!q.empty())
    {
        v.push_back(q.front());
        q.pop();
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {
        q.push(v[i]);
    }
};

int main()
{
    queue<int>q;
    q.push(5);
    q.push(12);
    q.push(10);
    q.push(11);
    q.push(19);
    sortqueue(q);
    while (!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    
}