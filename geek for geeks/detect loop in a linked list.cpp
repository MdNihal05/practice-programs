class Solution
{
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
        // your code here
        Node * temp=head;
        Node *ptr=head;
        if(head==NULL || head->next==NULL) return 0;
        while( temp->next!=NULL && temp->next->next!=NULL )
        {
            
            temp=temp->next->next;
            ptr=ptr->next;
            if(temp==ptr) return 1;
        }
        return 0;
    }
};
