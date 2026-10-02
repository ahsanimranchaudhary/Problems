# include "binarytree.cpp"
# include<bits/stdc++.h>
void visit(Node *t);
void preordertraverselrec(Node *t);
void preordertraverselitr(Node *t);
int main()
{
    Node *t=Binarytree();
    cout<<"Recursive: ";
    preordertraverselrec(t);
    cout<<endl;
    cout<<"Iterative: ";
    preordertraverselitr(t);
    return 0;
}

void visit(Node *t)
{
    cout<<t->data<<" ";
}

void preordertraverselrec(Node *t)
{
    if(t==nullptr)
    {
        return;
    }
    visit(t);
    preordertraverselrec(t->left);
    preordertraverselrec(t->right);
}
// preorder=NLR
void preordertraverselitr(Node *t)
{
    stack<Node*> s;
    s.push(t);
    while (!s.empty())
    {
        Node *temp=s.top();
        s.pop();
        cout<<temp->data<<" ";
        if(temp->right)
        {
            s.push(temp->right);
        }
        if(temp->left)
        {
            s.push(temp->left);
        }
    }
}