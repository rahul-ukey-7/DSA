class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
        int duplicate;
        int missing;

        int H[n+1];

        for(int i=0;i<n+1;i++)
        {
            H[i]=0;
        }

        for(int i=0;i<n;i++)
        {
            H[nums[i]]++;
        }

        for(int i=1;i<n+1;i++)
        {
            if(H[i]==0)
            {
                missing=i;
            }
            else if(H[i]==2)
            {
                duplicate=i;
            }
        }

        return {duplicate,missing};
    }
};