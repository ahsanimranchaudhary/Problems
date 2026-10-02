# include "binarytree.cpp"
# include<bits/stdc++.h>
void visit(Node *t);
void postordertraverselrec(Node *t);
void postordertraverselitr(Node *t);
int main()
{
    Node *t=Binarytree();
    cout<<"Recursive: ";
    postordertraverselrec(t);
    cout<<endl;
    cout<<"Iterative: ";
    postordertraverselitr(t);
    return 0;
}

void visit(Node *t)
{
    cout<<t->data<<" ";
}

void postordertraverselrec(Node *t)
{
    if(t==nullptr)
    {
        return;
    }
    postordertraverselrec(t->left);
    postordertraverselrec(t->right);
    visit(t);
}
// post order=LRN 
// Reverse post order=NRL
void postordertraverselitr(Node *t)
{
    queue<Node *>q;
    q.push(t);
    vector<char>ans;
    while (!q.empty())
    {   
        char a=q.front()->data;
        ans.push_back(a);
        Node *temp=q.front();
        q.pop();
        if(temp->right)
        {
            q.push(temp->right);
        }
        if(temp->left)
        {
            q.push(temp->left);
        }
    }
    for(int i=0,j=ans.size()-1;i<=j;i++,j--)
    {
        swap(ans[i],ans[j]);
    }
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
}