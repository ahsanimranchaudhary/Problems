# include<iostream>
using namespace std;

struct BST
{
    int data;
    BST *left,*right;
};

class Solution
{
public:
    void Klargest(BST *root,int &ans,int &k)
    {
        if(!root)
        {
            return;
        }   
        Klargest(root->right,ans,k);
        k--;
        if(k==0)
        {
            ans=root->data;
        }
        if(k<=0)
        {
            return;
        }
        Klargest(root->left,ans,k);
    }
};


int main()
{
    return 0;
}