/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        vector<int> ans;
        ListNode* temp =head;

        while(temp !=NULL)
        {
            ans.push_back(temp->val);
            temp =temp->next;
        }

        int i =ans.size()-1;
        temp =head;

        while(temp)
        {
            temp->val =ans[i];
            i--;
            temp = temp->next;
        }
        return head;
    }



     ListNode* reverseList2(ListNode* head) {
        ListNode* curr =head ,*prev =NULL , *Fut =NULL;
        while(curr)
        {
            Fut =curr->next;
            curr->next =prev;
            prev =curr;
            curr =Fut;
        }
        head =prev;
        return head;
    }

    // Using Recursion 
    ListNode* Reverse(ListNode *curr,ListNode * prev)
    {
        if(curr == NULL)
        return prev;

        ListNode *Fut = curr->next;
        curr->next =prev;
        return Reverse(Fut , curr);
    }
   
    ListNode* reverseList(ListNode* head) {
        // using recursion
        return Reverse(head,NULL);
    }
};