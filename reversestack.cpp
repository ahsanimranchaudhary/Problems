# include<iostream>
# include<stack>
using namespace std;
void insertatbottom(stack<int>&s,int e){
    if(s.empty())
    {
        s.push(e);
        return;
    }
    int temp=s.top();
    s.pop();
    insertatbottom(s,e);
    s.push(temp);
}
void reverse_stack(stack<int>&opr){
    
    if(opr.empty())
    {
        return;
    }
    int temp=opr.top();
    opr.pop();
    reverse_stack(opr);
    insertatbottom(opr,temp);
}
int main(){
    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    reverse_stack(s);
    while (!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }
    
}