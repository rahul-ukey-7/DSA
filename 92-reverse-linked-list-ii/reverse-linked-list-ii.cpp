class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {

        if(head == NULL || left == right)
            return head;

        ListNode *LEFT = head;
        ListNode *RIGHT = head;
        ListNode *beforeLeft = NULL;

        for(int i = 1; i < left; i++)
        {
            beforeLeft = LEFT;
            LEFT = LEFT->next;
        }

        RIGHT = LEFT;
        for(int i = left; i < right; i++)
        {
            RIGHT = RIGHT->next;
        }

        ListNode *afterRight = RIGHT->next;

        ListNode *p = LEFT;
        ListNode *q = NULL;
        ListNode *r = NULL;

        while(p != afterRight)
        {
            r = q;
            q = p;
            p = p->next;
            q->next = r;
        }

        if(beforeLeft)
            beforeLeft->next = q;
        else
            head = q;

        LEFT->next = afterRight;

        return head;
    }
};