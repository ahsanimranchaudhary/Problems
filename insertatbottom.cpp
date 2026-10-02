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
int main(){
    stack<int>s;
    s.push(20);
    s.push(30);
    s.push(40);
    insertatbottom(s,10);
    while(!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }
    return 0;
}