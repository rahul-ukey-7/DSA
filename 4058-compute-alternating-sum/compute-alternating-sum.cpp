class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int n=nums.size();

        int oddsum=0;
        int evensum=0;

        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            {
                evensum+=nums[i];
            }
            else
            {
                oddsum+=nums[i];
            }
        }

        return evensum-oddsum;
    }
};