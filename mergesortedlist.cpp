# include<iostream>
using namespace std;
struct Node 
{
    int val;
    Node *next;
    Node() : val(0), next(nullptr) {}
    Node(int x) : val(x), next(nullptr) {}
    Node(int x, Node *next) : val(x), next(next) {}
};

Node *sortedMerge(Node *head1,Node*head2)
{
    Node *head=new Node(0);
    Node *tail=head;
    while(head1&&head2)
    {
        if(head1->val<=head2->val)
        {
            tail->next=head1;
            head1=head->next;
            tail=tail->next;
            tail->next=nullptr;
        }
        else
        {
            tail->next=head2;
            head2=head->next;
            tail=tail->next;
            tail->next=nullptr;
        }
    }
    if(head1)
    {
        tail->next=head1;
    }
    else
    {
        tail->next=head2;
    }
    tail=head;
    head=head->next;
    delete tail;
}
