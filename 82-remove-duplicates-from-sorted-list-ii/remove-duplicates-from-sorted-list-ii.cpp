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
        if(head==NULL || head->next==NULL)
        {
            return head;
        }

        ListNode* p=head;
        ListNode* q=NULL;
        ListNode* r=NULL;

        while(p)
        {
            r=q;
            q=p;
            p=p->next;

            if(r && q && p && q->val==p->val)
            {
                while(p && q->val==p->val)
                {
                    p=p->next;
                }

                r->next=p;
                p=head;
                q=NULL;
                r=NULL;

            }
            else if(p && q && !r && q->val==p->val)
            {
                while(p && q->val==p->val)
                {
                    p=p->next;
                }
                
                head=p;

                q=NULL;
                r=NULL;

            }
        }

        return head;
    }
};