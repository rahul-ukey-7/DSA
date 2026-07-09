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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> nums;

        ListNode *p=head;

        while(p!=NULL)
        {
            nums.push_back(p->val);
            p=p->next;
        }

        vector<int> ans(nums.size());

        for(int i=0;i<nums.size();i++)
        {
            ans[i]=0;
        }

        stack<int> st;
        
        for(int i=0;i<nums.size();i++)
        {
            while(!st.empty() && nums[i]>nums[st.top()])
            {
                ans[st.top()]=nums[i];
                st.pop();
            }

            st.push(i);
        }
        

        return ans;
    }
};