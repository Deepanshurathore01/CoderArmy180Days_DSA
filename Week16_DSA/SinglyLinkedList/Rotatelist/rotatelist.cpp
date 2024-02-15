class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head->next ==NULL)
        {
            return head;
        }
        int count =0;
        ListNode* temp =head;
        while(temp)
        {
            count++;
            temp =temp->next;
        }
        k =k%count;
        if(k==0)return head;
        count -=k;

        ListNode*curr =head , *prev =NULL;
        while(count--)
        {
            prev =curr;
            curr =curr->next;
        }
        prev->next =NULL;
        ListNode* tail =curr;
        while(tail->next !=NULL)
        {
            tail=tail->next;
        }
        tail->next=head;
        head =curr;
        return head;
    }
};