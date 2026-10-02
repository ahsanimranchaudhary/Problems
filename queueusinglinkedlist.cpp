# include<iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        data=val;
        next=nullptr;
    }
};

class Queue
{
public:
    Node *front,*rear;
    int size;
    Queue()
    {
        front=rear=nullptr;
        size=0;
    }
    bool Isempty()
    {
        return front==nullptr;
    }
    void push(int val)
    {
        if(this->Isempty())
        {
            Node *temp=new Node(val);
            front=rear=temp;
            return;
        }
        else
        {
            Node *temp=new Node(val);
            rear->next=temp;
            rear=temp;
        }
    }
    void pop()
    {
        if(this->Isempty())
        {
            cout<<"Queue underflow";
            return;
        }
        else
        {
            Node *temp=front;
            front=front->next;
            delete temp;
        }
    }
    int frontelement()
    {
        if(this->Isempty())
        {
            return -1;
        }
        return front->data;
    };
};

void printqueue(Queue q)
{   
    Node *temp=q.front;
    while (temp)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    
}
int main()
{
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    printqueue(q);
    return 0;
}