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

    int length(ListNode *p)
    {
        int len=0;

        while(p!=NULL)
        {
            len++;
            p=p->next;
        }

        return len;
    }
    ListNode* middleNode(ListNode* head) {
        int n=length(head);

        ListNode* p=head;
        ListNode* q=head;


        while(q!=NULL)
        {
            q=q->next;

            if(q)
            {
                q=q->next;
            }

            if(q)
            {
                p=p->next;
            }
        }

        if(n%2==0)
        {
            return p->next;
        }
        else
        {
            return p;
        }

        


    }
};