# include "binarytree.cpp"
# include<queue>
void countleaves(Node *root,int &sum)
{
    if(root==nullptr)
    {
        return;
    }

    if(!root->left&&!root->right)
    {
        sum++;
        return;
    }
    countleaves(root->left,sum);
    countleaves(root->right,sum);
}

int totalleafnodes(Node *t)
{
    if(t==nullptr)
    {
        return 0;
    }
    if(!t->left&&!t->right)
    {
        return 1;
    }
    return(totalleafnodes(t->left)+totalleafnodes(t->right));
}

int countleafs(Node *root)
{
    int sum=0;
    queue<Node *>q;
    q.push(root);
    while(!q.empty())
    {
        Node *temp=q.front();
        q.pop();

        if(temp)
        {
            if(!temp->left&&!temp->right)
            {
                sum++;
            }
            q.push(temp->left);
            q.push(temp->right);
        }
    }
    return sum;
}


int main()
{
    int s=0;
    Node *t=Binarytree();
    //countleaves(t,s);
    cout<<"Leaves:"<<countleafs(t);
    return 0;
}