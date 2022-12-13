class Solution
{
    public:
    //Function to count nodes of a linked list.
    int getCount(struct Node* head){
    int cnt=0;
        //Code here
        while(head!=NULL)
        {
            cnt++;
            head=head->next;
        }
        return cnt;
    
    }
};
