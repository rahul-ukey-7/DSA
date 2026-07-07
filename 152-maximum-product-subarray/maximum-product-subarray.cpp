class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int i;
        int n=nums.size();
        int lefttoright=1;
        int righttoleft=1;
        int maxmul=INT_MIN;

        for(i=0;i<n;i++)
        {
            if(lefttoright==0)
            {
                lefttoright=1;
            }

            if(righttoleft==0)
            {
                righttoleft=1;
            }

            lefttoright*=nums[i];

            int j=n-1-i;

            righttoleft*=nums[j];

            maxmul=max({righttoleft,lefttoright,maxmul});
        }

        return maxmul;
    }
};