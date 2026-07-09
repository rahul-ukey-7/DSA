class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int i,count=0;
        int maxi=0;

        for(i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
            {
                count++;
                maxi=max(maxi,count);
            }
            else
            {
                count=0;
            }
        }

            return maxi;
        
    }
};