# include<iostream>
# include<stack>
using namespace std;
void sorted_order_push(stack<int>&s,int k)
{
    if(s.empty())
    {
        s.push(k);
        return;
    }
    else if(s.top()<k)
    {
        s.push(k);
        return;
    }
    int a=s.top();
    s.pop();
    sorted_order_push(s,k);
    s.push(a);
}
void sortstack(stack<int>&s)
{   
    if(s.empty())
    {
        return;
    }
    int a=s.top();
    s.pop();
    sortstack(s);
    sorted_order_push(s,a);
}
void printstack(stack<int>s)
{
    while (!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    
}
int main()
{   
    stack<int>s;
    cout<<"Before sorting\n";
    printstack(s);
    cout<<"\nAfter sorting\n";
    sortstack(s);
    printstack(s);
    return 0;
}