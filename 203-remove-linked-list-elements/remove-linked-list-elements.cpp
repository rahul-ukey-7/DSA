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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* p=head;
        ListNode* q;

        if(head==NULL)
        {
            return NULL;
        }

        if(p->val==val)
        {
            while(p!=NULL && p->val==val)
            {
            p=p->next;
            head=p;
            }
        }

            while(p!=NULL)
            {
                    q=p;
                    p=p->next;

                if(p && p->val==val)
                {
                    q->next=p->next;
                    p=p->next;

                    while(p && p->val==val)
                    {
                        p=p->next;
                    }

                    if(p)
                    {
                        q->next=p;
                    }
                    else
                    {
                        q->next=NULL;
                    }

                }



            }

        return head;

    }
};