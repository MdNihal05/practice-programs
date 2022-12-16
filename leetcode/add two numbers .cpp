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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode * temp=new ListNode(0);
        ListNode * help=temp;
        int carry=0;
        while(l1!=NULL||l2!=NULL){
            int a=l1!=NULL?l1->val:0;
            int b=l2!=NULL?l2->val:0;
            int s=a+b+carry;
            carry=s/10;
            int x=s%10;
            ListNode * ptr=new ListNode(x);
            help->next=ptr;
            help=help->next;
            if(l1!=NULL) l1=l1->next;
            if(l2!=NULL) l2=l2->next;
        }
        if(carry){
            ListNode* ptr=new ListNode(carry);
            help->next=ptr;
            help=help->next;
        }
        return temp->next;
    }
};
