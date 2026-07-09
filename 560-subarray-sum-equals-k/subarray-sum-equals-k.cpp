class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count=0;
        int n=nums.size();
        int i;
        int j;

        

        for(i=0;i<n;i++)
        {
            
            int currsum=nums[i];

            if(currsum==k)
            {
                count++;
            }

            for(j=i+1;j<n;j++)
            {
                currsum+=nums[j];

                if(currsum==k)
                {
                    count++;
                }
            }
            currsum=0;
        }

        return count;
    }
};