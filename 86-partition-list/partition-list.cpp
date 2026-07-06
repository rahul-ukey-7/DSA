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
    ListNode* partition(ListNode* head, int x) {
        if(head==NULL || head->next==NULL)
        {
            return head;
        }

        ListNode* p=head;
        ListNode* dummy=new ListNode(0);
        ListNode* last=dummy;

        while(p!=NULL)
        {
            if(p->val<x)
            {
                last->next=new ListNode(p->val);
                last=last->next;
            }
            p=p->next;
        }

        p=head;

        while(p!=NULL)
        {
            if(p->val>=x)
            {
                last->next=new ListNode(p->val);
                last=last->next;
            }
            p=p->next;
        }

        return dummy->next;
    }
};