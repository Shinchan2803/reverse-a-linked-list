class Solution {
public:
    ListNode* reverseList(ListNode* head) {
    ListNode* newnode = NULL;
    while(head!=NULL)
    {
        ListNode* temp=head->next;
        head->next=newnode;
        newnode=head;
        head=temp->next;
    }
    return newnode;

    }
};
