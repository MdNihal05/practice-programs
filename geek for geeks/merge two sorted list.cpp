Node* sortedMerge(Node* head1, Node* head2)  
{  
    // code here
    Node * temp=new Node(0);
    Node * ptr=temp;
    while(head1!=NULL&&head2!=NULL)
    {
        if(head1->data<=head2->data){
            ptr->next=head1;
            head1=head1->next;
        }
        else
        {
            ptr->next=head2;
            head2=head2->next;
        }
        ptr=ptr->next;
    }
    ptr->next=head1!=NULL?head1:head2;
    return temp->next;
}
