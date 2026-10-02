# include"binarytree.cpp"
# include<queue>
int sizeoftree(Node *t);
int totalnodes(Node *root);

int main()
{
    Node *t=Binarytree();
    cout<<totalnodes(t);
    return 0;
}

int sizeoftree(Node *t)
{
    queue<Node *>q;
    q.push(t);
    int count=0;
    while(!q.empty())
    {
        Node *temp=q.front();
        q.pop();
        if(temp)
        {
            q.push(temp->left);
            q.push(temp->right);
            count++;
        }
    }
    return count;
}

int totalnodes(Node *root)
{
    if(root==nullptr)
    {
        return 0;
    }
    return (1+totalnodes(root->left)+totalnodes(root->right)) ;
}