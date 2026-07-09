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
    ListNode* reverse(ListNode* head)
    {
        ListNode* p = head;
        ListNode* q = NULL;
        ListNode* r = NULL;

        while(p != NULL)
        {
            r = q;
            q = p;
            p = p->next;

            q->next = r;
        }

        return q;
    }

    bool isPalindrome(ListNode* head) {
        ListNode* p=head;
        ListNode* q=head;

        while(q->next!=NULL && q->next->next!=NULL)
        {
            p=p->next;
            q=q->next->next;
        }

        q=reverse(p->next);
        p=head;

        while(q!=NULL)
        {
            if(p->val!=q->val)
            {
                return false;
            }

            p=p->next;
            q=q->next;
        }

        return true;
        

    }
};