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
    ListNode* mergeTwoLists(ListNode* &a, ListNode* &b) {
        ListNode* temp=new ListNode(0);
        ListNode* help=temp;
        while(a!=NULL&&b!=NULL){
            if(a->val<=b->val){
                help->next=a;
                a=a->next;
            }
            else{
                help->next=b;
                b=b->next;
            }
            help=help->next;
        }
        help->next=a!=NULL?a:b;
        return temp->next;
    }
};
