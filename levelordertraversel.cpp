# include"binarytree.cpp"
# include<queue>
void levelordertravesel(Node *t);
int main()
{
    Node *t=Binarytree();
    levelordertravesel(t);
    return 0;
}

void levelordertravesel(Node *t)
{
    queue<Node *>q;
    q.push(t);
    while(!q.empty())
    {
        Node *temp=q.front();
        q.pop();
        if(temp)
        {
            cout<<"Value: "<<temp->data<<" ";
            q.push(temp->left);
            q.push(temp->right);
        }
    }
}