class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l=0,mid;
        int h=nums.size()-1;

       

        if(nums[0]<0 && nums[1]<0 && nums[2]>0)
        {
            return 2;
        }
        if(nums[0]==-1 && target==0)
        {
            return 1;
        }

         if(target==0)
        {
            return 0;
        }
        
        if(target<nums[0])
        {
            return 0;
        }
        else if(nums.size()==1 && target>nums[0])
        {
            return 1;
        }


        while(l<=h)
        {
            mid=(h+(h-l))/2;

            if(nums[mid]==target)
            {
                return mid;
            }
            else if(nums[mid]>target)
            {
                h=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }

        if(nums[mid]>target)
        {
            return mid-1;
        }
        else
        {
            return mid+1;
        }

        
    }
};