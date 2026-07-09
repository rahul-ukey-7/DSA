class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

        vector<int> ans;

        for(int i = 0; i < nums1.size(); i++)
        {
            stack<int> st1;
            stack<int> st2;
            
            for(int j = 0; j < nums2.size(); j++)
            {
                st1.push(nums2[j]);
            }

            while(!st1.empty() && st1.top() != nums1[i])
            {
                st2.push(st1.top());
                st1.pop();
            }

            int nge = -1;

            while(!st2.empty())
            {
                if(st2.top() > nums1[i])
                {
                    nge = st2.top();
                    break;
                }

                st2.pop();
            }

            ans.push_back(nge);
        }

        return ans;
    }
};