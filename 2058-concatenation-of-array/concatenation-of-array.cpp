class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans;
        int i;
        int n=nums.size();

        for(i=0;i<n;i++)
        {
            ans.push_back(nums[i]);
        }

        for(i=0;i<n;i++)
        {
            ans.push_back(nums[i]);
        }

        return ans;
    }
};