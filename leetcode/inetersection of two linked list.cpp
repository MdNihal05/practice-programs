/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int l1=0,l2=0;
        ListNode *a=headA,*b=headB;
        while(a!=NULL) a=a->next,l1++;
        while(b!=NULL) b=b->next,l2++;
        a=headA,b=headB;
        int dif=abs(l1-l2);
        if(l1>l2)
        {
            while(dif--)
            {
                a=a->next;
            }
        }
        else
        {
            while(dif--)
            {
                b=b->next;
            }
        }
        while(a!=NULL)
        {
            if(a==b)
            {
                return a;
            };
            a=a->next;
            b=b->next;
        }
        return 0;
    }
};
