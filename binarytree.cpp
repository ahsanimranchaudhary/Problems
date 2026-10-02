# include<iostream>
using namespace std;
class Node
{
public:
    char data;
    Node *left,*right;
    Node(char val):data(val),left(nullptr),right(nullptr){};
};

Node* Binarytree()
{
    char x;
    cout<<"Enter value: ";
    cin>>x;
    if(x=='0')
    {
        return nullptr;
    }
    Node *temp=new Node(x);
    // left side
    cout<<"Enter left child of "<<x<<endl;
    temp->left=Binarytree();
    // right side
    cout<<"Enter right child of "<<x<<endl;
    temp->right=Binarytree();
    return temp;
}
