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
    ListNode* rotateRight(ListNode* head, int k) {
        
        if(head==NULL || head->next==NULL)
        {
            return head;
        }

        int n = 0;
        ListNode* p = head;
        while(p)
        {
            n++;
            p = p->next;
        }

        k %= n;
        
        while(k)
        {
            ListNode* p=head;
            ListNode* q=NULL;

            while(p && p->next)
            {
                q=p;
                p=p->next;
            }

            q->next=p->next;
            p->next=head;
            head=p;
            k--;
        }

        return head;
    }
};