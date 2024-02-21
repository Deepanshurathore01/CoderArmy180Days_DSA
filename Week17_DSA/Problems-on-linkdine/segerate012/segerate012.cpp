    Node* segregate(Node *head) {
        
        Node*curr =head;
        Node* head0 ,*head1 ,*head2;
        head0 = head1 =head2 =NULL;
        
        while(curr)
        {
            if(curr->data == 0)
            {
                head0 =curr;
                curr =curr->next;
                head0->next=NULL;
            }
            else if(curr->data == 1)
            {
                head1 =curr;
                curr =curr->next;
                head1->next=NULL;
            }
            else
            {
                head2 =curr;
                curr =curr->next;
                head2->next=NULL;
            }
            curr =curr->next;
        }
        
        curr =head1;
        while(curr)
        {
            if(!head0)
            head0->next =head1;
            else if(!head1)
            head1->next =head2;
            
            curr =curr->next;
        }
        
        head =head0;
        
        return head;
    }

    