# include<iostream>
using namespace std;

class TreeNode
{
public:
    int data;
    TreeNode *left,*right;
    TreeNode(int val):data(val),left(nullptr),right(nullptr){}
};

class Binary_search_tree
{
public:
    TreeNode *root;
    Binary_search_tree():root(nullptr){};
    friend TreeNode* deleteNode(TreeNode* root, int target);
    bool search(int k)
    {   
        TreeNode *temp=root;
        while(temp)
        {
            if(temp->data==k)
            {
                return true;
            }
            else if(temp->data>k)
            {
                temp=temp->left;
            }
            else if(temp->data<k)
            {
                temp=temp->right;
            }
        }
        return false;
    };
    void insert(int val)
    {
        if(!root)
        {
            root=new TreeNode(val);
            return;
        }
        bool flag=search(val);
        if(flag)
        {
            cout<<"Data already exist";
        }
        else
        {
            TreeNode *temp1=root;
            TreeNode *temp2;
            while (temp1!=nullptr)
            {
                if(temp1->data>val)
                {
                    temp2=temp1;
                    temp1=temp1->left;
                    if(temp1==nullptr)
                    {
                        temp2->left=new TreeNode(val);
                    }
                }
                else if(temp1->data<val)
                {
                    temp2=temp1;
                    temp1=temp1->right;
                    if(temp1==nullptr)
                    {
                        temp2->right=new TreeNode(val);
                    }
                }  
            }
            
        }
    };
        
};

void visit(TreeNode *t)
{
    cout<<t->data<<" ";
};

void inordertraversel(TreeNode*t)
{
    if(t==nullptr)
    {
        return;
    }
    inordertraversel(t->left);
    visit(t);
    inordertraversel(t->right);
};

void reverseinordertraversel(TreeNode*t)
{
    if(t==nullptr)
    {
        return;
    }
    reverseinordertraversel(t->right);
    visit(t);
    reverseinordertraversel(t->left);
};


TreeNode* deleteNode(TreeNode* root, int target) 
{

    if (!root) 
    {
        return nullptr;
    }
    if (root->data>target) 
    {
        root->left=deleteNode(root->left, target);
    } 
    else if (root->data<target) 
    {
        root->right=deleteNode(root->right, target);
    } 
    else 
    {        
        // Case 1:Leaf node
        if (!root->left&&!root->right) 
        {
            delete root;
            return nullptr;
        }
        // Case 2:One child
        if (!root->left) 
        { 
            // Only right child
            TreeNode* temp = root->right;
            delete root;
            return temp;
        }
        if (!root->right) 
        { 
            // Only left child
            TreeNode* temp = root->left;
            delete root;
            return temp;
        }
        // Case 3:Two children→Replace with inorder predecessor (max in left subtree)
        TreeNode* parent = root;
        TreeNode* child  = root->left;
        while (child->right) 
        {
            parent = child;
            child = child->right;
        }
        root->data = child->data;
        if (parent == root) 
        {
            parent->left = child->left;
        } 
        else 
        {
            parent->right = child->left;
        }
        delete child;
        // alternative:Replace with inorder successor (min in right subtree)
        // TreeNode* parent = root;
        // TreeNode* child  = root->right;
        // while (child->left) 
        // {
        //     parent = child;
        //     child = child->left;
        // }
        // root->data = child->data;

        // if (parent == root) 
        // {
        //     parent->right = child->right;
        // } 
        // else 
        // {
        //     parent->left = child->right;
        // }
        // delete child;
    }
    return root;
}
