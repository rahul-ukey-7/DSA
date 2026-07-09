class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int i;
        vector<int> ans;
        int H[nums.size()+1];

        for(i=0;i<=nums.size();i++)
        {
            H[i]=0;
        }

        for(i=0;i<nums.size();i++)
        {
            H[nums[i]]++;
        }

        for(i=1;i<=nums.size();i++)
        {
            if(H[i]==0)
            {
                ans.push_back(i);
            }
        }

        return ans;
    }
};