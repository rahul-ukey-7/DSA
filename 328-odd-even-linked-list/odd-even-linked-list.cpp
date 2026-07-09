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
    ListNode* oddEvenList(ListNode* head) {
        
        if(head==NULL)
        {
            return NULL;
        }
        ListNode* t=head;
        ListNode* s=head->next;
        
        ListNode* p=head;
        ListNode* q=head->next;

        while(q && q->next)
        {
            p->next=q->next;
            p=p->next;

            q->next=p->next;
            q=q->next;
        }

        

        p->next=s;

        return t;
    }
};