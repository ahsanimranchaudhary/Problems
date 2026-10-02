# include<iostream>
# include<bits/stdc++.h>
using namespace std;
struct TreeNode 
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};



class Solution {
public:
    bool isCousins(TreeNode* root, int x, int y) 
    {
        int level1=levelofnode(root,x);
        int level2=levelofnode(root,y);
        if(level1==level2)
        {
           queue<TreeNode *>q;
           q.push(root);
           while (!q.empty())
           {
                TreeNode *temp=q.front();
                q.pop();
                if(temp)
                {
                    if(temp->left&&temp->right)
                    {
                        if((temp->left->val==x&&temp->right->val==y)||(temp->left->val==y&&temp->right->val==x))
                        {
                            return false;
                        }
                    }
                }
                if(temp->left)
                {
                    q.push(temp->left);
                }
                if(temp->right)
                {
                    q.push(temp->right);
                }
           }
           return true;
           
        }
        return false;
    }   
    int levelofnode(TreeNode *root,int a)
    {
        if(root == nullptr) 
        {
            return 0;
        }
        queue<TreeNode *>q;
        q.push(root);
        q.push(NULL);
        int level=1;
        while(!q.empty())
        {
            TreeNode *temp=q.front();
            q.pop();
            if(!temp)
            {
                if(!q.empty())
                {
                    q.push(NULL);
                    level++;
                }
            }
            else if(temp->val==a)
            {
                break;
            }
            else
            {
                if(temp->left)
                {    
                    q.push(temp->left);
                }
                if(temp->right)
                {    
                    q.push(temp->right);
                }
            }
        }
        return level;
    }
};

int main()
{

}
