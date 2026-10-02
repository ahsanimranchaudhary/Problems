# include "binarytree.cpp"
# include<queue>
void countnonleaves(Node *root,int &sum)
{
    if(root==nullptr)
    {
        return;
    }

    if(root->left||root->right)
    {
        sum++;
    }
    countnonleaves(root->left,sum);
    countnonleaves(root->right,sum);
}

int totalnonleafnodes(Node *t)
{
    if(t==nullptr)
    {
        return 0;
    }
    if(!t->left&&!t->right)
    {
        return 0;
    }
    return(1+totalnonleafnodes(t->left)+totalnonleafnodes(t->right));
}

int countnonleafs(Node *root)
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
            if(temp->left||temp->right)
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
    countnonleaves(t,s);
    cout<<"Non-Leaves:"<<countnonleafs(t);
    return 0;
}