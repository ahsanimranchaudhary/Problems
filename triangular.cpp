# include<iostream>
using namespace std;
void triangular(int n)
{
    if(n==0)
    {
        return;
    }
    triangular(n-1);
    for(int i=0;i<n;i++)
    {
        cout<<"*";
    }
    cout<<endl;
}
int main()
{
    //triangular(7);
    cout<<2/2;
    return 0;
}