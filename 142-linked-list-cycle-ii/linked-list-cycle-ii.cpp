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
    ListNode *detectCycle(ListNode *head) {
        
        if(head==NULL)
        {
            return NULL;
        }

        ListNode *p=head;
        ListNode *q=head;

        do
        {
            
            if(q)
            {
                q=q->next;
            }
            

            if(q)
            {
                q=q->next;
            }

            
            p=p->next;

        }while(p && q && q!=p);

        if(!(p && q))
        {
            return NULL;
        }

        p=head;

        while(p!=q)
        {
            p=p->next;
            q=q->next;
        }

        return p;
    }
};