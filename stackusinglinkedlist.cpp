# include<iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int val=0)
    {
        data=val;
        next=nullptr;
    };
};

class stack
{
public:
    Node *top;
    int size;
    stack()
    {
        size=0;
        top=nullptr;
    };
    void push(int val)
    {
        Node *temp=new Node(val);
        temp->next=top;
        top=temp;
        size++;
    }
    int getsize() const 
    {
        return this->size;
    }
    void pop()
    {
       if(top==nullptr)
       {
            cout<<"Stack underflow";
       }
       else
        {
            Node *temp=top;
            top=top->next;
            delete temp;
            size--;
        }
    }
    int peek()
    {
        if(top==nullptr)
        {
            return -1;
        }
        return top->data;
    }

    bool Isempty()
    {
        return top==nullptr;
    }

};

void printstack(stack s)
{
    Node *temp=s.top;
    while (temp!=nullptr)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main()
{
    stack s;
    s.push(22);
    s.push(11);
    s.push(123);
    s.push(100);
    printstack(s);
}