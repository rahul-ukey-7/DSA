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
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL || head->next==NULL)
        {
            return head;
        }

        ListNode* q=head;
        ListNode* p=head->next;

        while (q && p)
        {
            int temp=p->val;
            p->val=q->val;
            q->val=temp;

            p=p->next;
            if(p)
            {
                p=p->next;
            }
            q=q->next->next;
        }

        return head;
    }
};