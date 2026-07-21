class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int prevsum=nums[0];
        int maxsub=nums[0];
        int n=nums.size();

        for(int i=1;i<n;i++)
        {
           if(prevsum<0)
           {
                prevsum=nums[i];
           }
           else
           {
                prevsum+=nums[i];
           }

           maxsub=max(prevsum,maxsub);
        }

        return maxsub;
    }
};