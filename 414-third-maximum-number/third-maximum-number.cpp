class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int i,flag=0;
        long firstmax=LONG_MIN;
        long secondmax=LONG_MIN;
        long thirdmax=LONG_MIN;

        for(i=0;i<nums.size();i++)
        {
            if(nums[i]>firstmax)
            {
                firstmax=nums[i];
            }
        }

        for(i=0;i<nums.size();i++)
        {
            if(nums[i]>secondmax && nums[i]<firstmax)
            {
                secondmax=nums[i];
            }
        }

        for(i=0;i<nums.size();i++)
        {
            if(nums[i]>thirdmax && nums[i]<secondmax && nums[i]<firstmax)
            {
                thirdmax=nums[i];
                flag=1;
            }
        }

        if(flag==0)
        {
            return firstmax;
        }
        else
        {
            return thirdmax;
        }



    }
};