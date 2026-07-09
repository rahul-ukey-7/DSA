class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        
        int i;
        int n=nums.size();
        int sum=0;

        for(i=0;i<n;i++)
        {
            sum+=nums[i];
        }

        return sum%k;
    }
};