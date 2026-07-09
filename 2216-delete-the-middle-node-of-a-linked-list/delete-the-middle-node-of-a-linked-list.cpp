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
    int length(ListNode* p)
    {
        int len=0;

        while(p!=NULL)
        {
            len++;
            p=p->next;
        }

        return len;
    }

    ListNode* deleteMiddle(ListNode* head) {
        
        if(head==NULL)
        {
            return NULL;
        }
        else if(length(head)==1)
        {
            return NULL;
        }

        ListNode* p=head;
        ListNode* q=head;

        while(q && q->next)
        {
            q=q->next;
            if(q)
            {
                q=q->next;
            }
            p=p->next;
        }

        ListNode* r=head;
        ListNode* s;

        while(r!=p)
        {
            s=r;
            r=r->next;
        }

        if(r)
        {
        s->next=r->next;
        }

        return head;
    }
};