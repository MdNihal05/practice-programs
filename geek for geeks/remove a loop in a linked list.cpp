class Solution
{
    public:
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
        // code here
        // just remove the loop without losing any nodes
        if(head==nullptr||head->next==NULL) return ;
        Node *slow=head,*fast=head,*help=head;
        while(fast!=NULL && fast->next!=NULL)
        {
            help=slow;
            fast=fast->next->next;
            slow=slow->next;
            if(slow==fast) break;
        }
        if(fast==NULL || fast->next==NULL) return ;
        Node *temp=head;
        while(temp!=slow)
        {
            temp=temp->next;
            help=slow;
            slow=slow->next;
        }
        help->next=NULL;
        
    }
};
