class Solution {
public:
    bool sorted(vector<int>& nums)
    {
    for(int i = 1; i < nums.size(); i++)
    {
        if(nums[i] < nums[i-1])
            return false;
    }
    return true;
    }

    int minimumPairRemoval(vector<int>& nums) {
        
    int ans=0;
    while(!sorted(nums))
    {
        int n=nums.size();

        int i=0;
        int j=1;
        int minsum=INT_MAX;

        while(j<n)
        {
            if(nums[i]+nums[j]<minsum)
            {
                minsum=nums[i]+nums[j];
            }

            i++;
            j++;
        }

        i=0;
        j=1;

        while(j<n)
        {
            if(nums[i]+nums[j]==minsum)
            {
                nums[i]=nums[i]+nums[j];
                int k=j;

                while(k<n-1)
                {
                    nums[k]=nums[k+1];
                    k++;
                }
                nums.pop_back();
                ans++;
                break;
            }
            i++;
            j++;
        }
    }
        return ans;
    }
};