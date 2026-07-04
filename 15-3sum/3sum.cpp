class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        int i;
        int n=nums.size();
        
        sort(nums.begin(),nums.end());

         for(i=0;i<n-2;i++)
         {
            int x=nums[i];

            int left=i+1;
            int right=n-1;

            while(left<right)
            {
                int sum=nums[left]+nums[right]+x;
                if(sum==0)
                {
                    vector<int> temp={x,nums[left],nums[right]};
                    sort(temp.begin(),temp.end());
                    ans.push_back(temp);

                    left++;
                    right--;
                }
                else if(sum<0)
                {
                    left++;
                }
                else
                {
                    right--;
                }

                
            }
         }

         set<vector<int>> s(ans.begin(),ans.end());
         ans.assign(s.begin(),s.end());

        return ans;
    }
};