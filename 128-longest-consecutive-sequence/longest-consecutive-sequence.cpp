class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        int n=nums.size();
        int i;

        int res=1;
        int cnt=1;

        if(n==0)
        {
            return 0;
        }

        for(i=1;i<n;i++)
        {
            if(nums[i]==nums[i-1])
            {
                continue;
            }
            else if(nums[i]==nums[i-1]+1)
            {
                cnt++;
            }
            else
            {
                cnt=1;
            }

            res=max(cnt,res);
        }


        return res;
    }
};