# include<iostream>
# include<vector>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
public:
    ListNode* reverseList(ListNode* &head) 
    {
        // ListNode *temp=head;
        // vector<int>ans;
        // while(temp!=nullptr)
        // {
        //     ans.push_back(temp->val);
        //     temp=temp->next;
        // }
        // int i=ans.size()-1;
        // temp=head;
        // while(temp!=nullptr)
        // {
        //     temp->val=ans[i];
        //     i--;
        //     temp=temp->next;
        // }
        // return head;
        ListNode *curr=head,*prev=nullptr;
        while(curr)
        {
            ListNode*temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        head=prev;
        return head;

    }
};
void printls(ListNode *head)
{
    ListNode*temp=head;
    while(temp!=nullptr)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}
int main()
{
    Solution s;
    ListNode *head;
    head=new ListNode(1);
    head->next=new ListNode(2);
    head->next->next=new ListNode(3);
    head->next->next->next=new ListNode(4);
    head->next->next->next->next=new ListNode(5);
    s.reverseList(head);
    printls(head);
    return 0;
}