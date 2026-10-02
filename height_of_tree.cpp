# include "binarytree.cpp"
# include <queue>
int height(Node *root) // depth first search
{
    if(root==nullptr)
    {
        return 0;
    }
    return (1+max(height(root->left),height(root->right)));
}

int heighttree(Node *root) // breadth first search
{
    if(!root)
    {
        return 0;
    }
    queue<Node*>q;
    q.push(root);
    q.push(nullptr);
    cout<<"Level 1: ";
    int level=1;
    while(!q.empty())
    {
        Node *temp=q.front();
        q.pop();
        if(temp)
        {
           cout<<temp->data<<" ";
           if(temp->left)
           {
                q.push(temp->left);
           }
           if(temp->right)
           {    
                q.push(temp->right);
           }
        }
        else
        {

            if(!q.empty())
            {
                q.push(NULL);
                level++;
                cout<<"\nLevel "<<level<<": ";
            }
        }
    }
    return level;
}


int main()
{
    Node *t;
    t=Binarytree();
    heighttree(t);
    return 0;
}