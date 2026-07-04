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
    ListNode* removeNthFromEnd(ListNode* head, int n){
        if(head==NULL)
        {
            return NULL;
        }
        ListNode* p=head;
        ListNode* q=NULL;

        int pos=length(p)-n+1;
        
        if(n==length(p))
        {
            p=p->next;
            head=p;

            return head;
        }
        for(int i=0;i<pos-1;i++)
        {
            q=p;
            p=p->next;
        }

        q->next=p->next;

        return head;
    }
};