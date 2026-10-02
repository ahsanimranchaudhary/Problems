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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>inorder;
        inordertraverse(root,inorder);
        return inorder;
    }
    void inordertraverse(TreeNode *root,vector<int>&inorder)
    {
        if(!root)
        {
            return;
        }
        inordertraverse(root->left,inorder);
        inorder.push_back(root->val);
        inordertraverse(root->right,inorder);
    }
};