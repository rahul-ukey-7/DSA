class Solution {
public:
    int findmax(vector<int> nums,int n)
    {
        int max=nums[0];
        int i;

        for(i=1;i<n;i++)
        {
            if(nums[i]>max)
            {
                max=nums[i];
            }
        }

        return max;
    }
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        int i;

        int max=findmax(nums,n);

        int H[max+1];

        for(i=0;i<max+1;i++)
        {
            H[i]=0;
        }

        for(i=0;i<n;i++)
        {
            H[nums[i]]++;
        }

        i=0;

        while(i<max+1)
        {
            if(H[i]>1)
            {
                break;
            }

            i++;
        }

        return i;
    }
};