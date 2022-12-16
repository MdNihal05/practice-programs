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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode * temp=new ListNode(0);
        if(head==NULL || head->next==NULL )return head;
        ListNode * help=temp;
        if(head->val==0) {
            ListNode *ptr=new ListNode(0);
            help->next=ptr;
            help=help->next;
        }
        ListNode * l=head;
        while(l!=NULL){
           if(l->val!=help->val){
               ListNode* ptr=new ListNode(l->val);
               help->next=ptr;
               help=help->next;
           }
           l=l->next;

        }
        return temp->next;
    }
};
