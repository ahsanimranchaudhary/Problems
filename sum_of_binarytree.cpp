# include "binarytree.cpp"
void Sumofnodes(Node *t,int &sum);
int sumofnodes(Node *t);


int main()
{
    Node *t=Binarytree();
    int sum=0;
    //Sumofnodes(t,sum);
    cout<<"sum of tree nodes:"<<sumofnodes(t);
}

void Sumofnodes(Node *t,int &sum)
{
    if(t==nullptr)
    {
        return;
    }
    sum+=t->data;
    Sumofnodes(t->left,sum);
    Sumofnodes(t->right,sum);
}

int sumofnodes(Node *t)
{
    if(t==nullptr)
    {
        return 0;
    }
    return (t->data+sumofnodes(t->left)+sumofnodes(t->right));
}