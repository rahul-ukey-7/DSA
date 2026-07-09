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
    int getDecimalValue(ListNode* head) {
        
        if(head==NULL)
        {
            return 0;
        }

        ListNode* p=head;
        int sum=0;
        int n=length(p);

        while(p!=NULL && n>=0)
        {
            sum+=pow(2,n-1)*p->val;
            n--;
            p=p->next;
        }

        return sum;

    }
};