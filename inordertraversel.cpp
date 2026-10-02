# include"binarytree.cpp"
# include<bits/stdc++.h>
void inordertraverselitr(Node *t);
void visit(Node *t);
void inordertraverselrec(Node *t);
int main()
{
    Node *t=Binarytree();
    cout<<"Recursive: ";
    inordertraverselrec(t);
    cout<<endl;
    cout<<"Iterative: ";
    inordertraverselitr(t);
    return 0;
}

void visit(Node *t)
{
    cout<<t->data<<" ";
}
// inorder traversel=LNR
void inordertraverselrec(Node *t) // recursive function
{
    if(t==nullptr)
    {
        return;
    }
    inordertraverselrec(t->left);
    visit(t);
    inordertraverselrec(t->right);
};

void inordertraverselitr(Node *t) // iterative function
{
    stack<Node *>s;
    stack<bool> v;
    s.push(t);
    v.push(0);
    while(!s.empty())
    {
        Node *temp=s.top();
        s.pop();
        bool flag=v.top();
        v.pop();
        if(!flag)
        {
            if(temp->right)
            {
                s.push(temp->right);
                v.push(0);
            }
            s.push(temp);
            v.push(1);
            if(temp->left)
            {
                s.push(temp->left);
                v.push(0);
            }
        }
        else
        {
            cout<<temp->data<<" ";
        }
    }
};